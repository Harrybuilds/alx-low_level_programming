#include "main.h"


/**
 *getElfType - function to return type of elf file
 *@e_type: integer that represents the file type
 *
 *Return: char pointer that represent the file type
*/

const char *getElfType(uint16_t e_type)
{
	switch (e_type)
	{
	case 1: return "REL (Relocatable file)";
	case 2: return "EXEC (Executable file)";
	case 3: return "DYN (Shared object file)";
	case 4: return "CORE (Core file)";
	default: return "Unknown";
	}
}


/**
 *getOsAbi - function to return the OS type
 *@e_ident: an integer that represent different OS
 *Return: char pointer that represent the OS
*/

const char *getOsAbi(uint8_t e_ident)
{
	switch (e_ident)
	{
	case 0: return "UNIX - System V";
	case 1: return "HP-UX";
	case 2: return "UNIX - NetBSD";
	case 3: return "UNIX - Linux";
	case 4: return "GNU Hurd";
	case 6: return "UNIX - Solaris";
	case 7: return "AIX";
	case 8: return "IRIX";
	case 9: return "FreeBSD";
	case 10: return "Tru64";
	case 11: return "Novell Modesto";
	case 12: return "OpenBSD";
	case 13: return "OpenVMS";
	case 14: return "NonStop Kernel";
	case 15: return "AROS";
	case 16: return "Fenix OS";
	case 17: return "CloudABI";
	case 18: return "Stratus Technologies OpenVOS";
	case 97: return "ARM";
	case 255: return "Standalone (embedded) application";
	default: return "<Unknown :53>";
	}
}

/**
 *printBasicElfInfo - function to print out specified info
 *@header: Elf file header that holds the needed info
 *Return: Nothing is returned
*/
void printBasicElfInfo(ElfHeader header)
{
	int i;
	char *Data =  header.e_ident[5] == 1 ? "little endian" : "big endian";

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < 16; ++i)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                  ELF%u\n", header.e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                   2's complement, %s\n", Data);
	printf("  Version:                %u (current)\n", header.e_version);
	printf("  OS/ABI:                 %s\n", getOsAbi(header.e_ident[7]));
	printf("  ABI Version:            %u\n", header.e_ident[8]);
	printf("  Type:                   %s\n", getElfType(header.e_type));
	printf("  Entry point address:    0x%lx\n", header.e_entry);
}


/**
 *main - start of program execution
 *@argc: count of argument passed through the commandline
 *@argv: a 2d array holding arguments passed the commandline
 *Return: always 0
*/
int main(int argc, char *argv[])
{
	char *not = "Error: Not an ELF file ";
	char *elf = "- it has the wrong magic bytes at the start\n";
	const char *filename = argv[1];
	FILE *file;
	ElfHeader elfHeader;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: elf_header elf_filename");
		exit(98);
	}

	file = fopen(filename, "rb");
	if (file == NULL)
	{
		dprintf(STDIN_FILENO, "Error: '%s': No such file\n", filename);
		exit(98);
	}
	/* Read the ELF header*/
	fread(&elfHeader, sizeof(ElfHeader), 1, file);
	/* Check if it's an ELF file by verifying the magic number*/
	if (elfHeader.e_ident[0] == 0x7f)
	{
		if (strncmp((char *)&elfHeader.e_ident[1], "ELF", 3) == 0)
		{
			printf("%s: file format ELF\n", filename);
			/* Print out the basic ELF header information*/
			printBasicElfInfo(elfHeader);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "%s%s", not, elf);
		exit(98);
	}

	fclose(file);
	return (0);
}
