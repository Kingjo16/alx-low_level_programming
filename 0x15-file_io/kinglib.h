#ifndef KINGLIB_H
#define KINGLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


/* elf */

void elf_file(unsigned char *ident_e);
void magic_print(unsigned char *ident_e);
void elf_printer(unsigned char *ident_e);
void data_print(unsigned char *ident_e);
void version_print(unsigned char *ident_e);
void osabi_printer(unsigned char *ident_e);
void abi_print(unsigned char *ident_e);
void elfheader_print(unsigned int elftype, unsigned char *ident_e);
void entry_print(unsigned long int elfentry, unsigned char *ident_e);
void elf_close(int elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);

#endif
