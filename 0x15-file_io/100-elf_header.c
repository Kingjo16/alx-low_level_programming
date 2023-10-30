#include "kinglib.h"

void elf_file(unsigned char *e_ident)
{
	int m;

	for (m = 0; m < 4; m++)
	{
		if (e_ident[m] != 127 &&
			e_ident[m] != 'E' &&
			e_ident[m] != 'L' &&
			e_ident[m] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
void magic_print(unsigned char *e_ident)
{
	int m;

	printf("  Magic:   ");

	for (m = 0; m < EI_NIDENT; m++)
	{
		printf("%02x", e_ident[m]);

		if (m == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


void elf_printer(unsigned char *e_ident)
{
	printf(" Class:				");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;

		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

void data_print(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

void version_print(unsigned char *e_ident)
{
	printf("  Version:				%d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
			{
			case EV_CURRENT:
			printf(" (current)\n");
			break;
			default:
			printf("\n");
			break;
			}
}
void osabi_printer(unsigned char *e_ident)
{
	printf(" OS/ABI:			");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
		case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
		case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
		case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
		case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
		case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
		case ELFOSABI_ARM:
		printf("ARM\n");
		break;
		case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
		default:
		printf("<unknown: %x\n", e_ident[EI_OSABI]);
	}
}

void abi_print(unsigned char *ident_e)
{
	printf("  ABI Version:                       %d\n",
	       ident_e[EI_ABIVERSION]);
}

void elfheader_print(unsigned int elftype, unsigned char *ident_e)
{
	if (ident_e[EI_DATA] == ELFDATA2MSB)
		elftype >>= 8;

	printf(" Type:					");

	switch (elftype)
	{
		case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elftype);
	}
}

void entry_print(unsigned long int elfentry, unsigned char *ident_e)
{
	printf("  Entry point address:               ");


		if (ident_e[EI_DATA] == ELFDATA2MSB)
	{
		elfentry = ((elfentry << 8) & 0xFF00FF00) |
			  ((elfentry >> 8) & 0xFF00FF);
		elfentry = (elfentry << 16) | (elfentry >> 16);
	}

	if (ident_e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elfentry);

	else
		printf("%#lx\n", elfentry);
}

void elf_close(int elf)
{

	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *list;
	int file_dis, m;

	file_dis = open(argv[1], O_RDONLY);
	if (file_dis == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	list = malloc(sizeof(Elf64_Ehdr));
	if (list == NULL)
	{
		elf_close(file_dis);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	m = read(file_dis, list, sizeof(Elf64_Ehdr));
	if (m == -1)
	{
		free(list);
		elf_close(file_dis);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_file(list->e_ident);
	printf("ELF Header:\n");
	magic_print(list->e_ident);
	elf_printer(list->e_ident);
	data_print(list->e_ident);
	version_print(list->e_ident);
	osabi_printer(list->e_ident);
	abi_print(list->e_ident);
	elfheader_print(list->e_type, list->e_ident);
	entry_print(list->e_entry, list->e_ident);

	free(list);
	elf_close(file_dis);
	return (0);
}
