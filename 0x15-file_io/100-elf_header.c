#include "kinglib.h"

void elf_file(unsigned char *ident_e)
{
	int m;

	for (m = 0; m < 4; m++)
	{
		if (ident_e[m] != 127 &&
			ident_e[m] != 'E' &&
			ident_e[m] != 'L' &&
			ident_e[m] != 'F')
		{
			dprintf(STDERR_FILENO,"Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void elf_printer(unsigned char *ident_e)
{
	printf(" Class:				");

	switch (ident_e[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASSNONE:
			printf("ELF64\n");
			break;
			
			default;
			printf("<unknown: %x>\n", ident_e[EI_CLASS]);
	}
}

void version_print(unsigned char *ident_e)
{
	printf("  Version:				%d",
			ident_e[EI_VERSION]);

	switch (ident_e[EI_VERSION])
			{
			case EV_CURRENT:
			printf(" (current)\n");
			break;
			default:
			printf("\n");
			break;
			}
}
void osabi_printer(unsigned char *ident_e)
{
	printf(" OS/ABI:			");

	switch (ident_e[EI_OSABI])
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
		printf("<unknown: %x\n", ident_e[EI_OSABI]);
	}
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


