#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/stat.h>


void check_elf(unsigned char *e_ident);
void magic(unsigned char *e_ident);
void class(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void data(unsigned char *e_ident);
void version(unsigned char *e_ident);
void abi(unsigned char *e_ident);
void osabi(unsigned char *e_ident);
void type(unsigned int e_type, unsigned char *e_ident);
void entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * close_file - close files
 * @file: the file to be closed
 * Return: void
 */

void close_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: can't read file %s\n", file);
	exit(98);
}

/**
 * close_elf - close elf
 * @elf: elf
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: arg count
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr *head;
	int open_file, read_file;

	(void)argc;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
		close_file(argv[1]);


	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(open_file);
		close_file(argv[1]);
	}

	read_file = read(open_file, head, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(head);
		close(open_file);
		dprintf(STDERR_FILENO, "Error %s: No such file", argv[1]);
		exit(98);
	}
	check_elf(head->e_ident);
	printf("ELF Header:\n");
	magic(head->e_ident);
	class(head->e_ident);
	data(head->e_ident);
	version(head->e_ident);
	osabi(head->e_ident);
	abi(head->e_ident);
	type(head->e_type, head->e_ident);
	entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(open_file);
	return (0);
}

/**
 * check_elf - check if file is an elf file
 * @e_ident: pointer to file
 * Return: void
 */

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i]
				!= 'E' && e_ident[i]
				!= 'L' && e_ident[i]
				!= 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - print elf magic number
 * @e_ident: e_ident elf file
 * Return: void
 */

void magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
 * class - prints the class of an elf file
 * @e_ident: header file
 * Return: void
 */

void class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;

		case ELFCLASS64:
			printf("ELF64\n");
			break;

		case ELFCLASS32:
			printf("ELF32\n");
			break;

		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data - prints the data value of an elf file
 * @e_ident: elf file
 */

void data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;

		case ELFDATA2LSB:
			printf("2's complement, little edian\n");
			break;

		case ELFDATA2MSB:
			printf("2's complement, big edian\n");
			break;

		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * version - prints the elf version
 * @e_ident: char pointer to the elf file
 */

void version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
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

/**
 * osabi - prints the OS/ABI of the elf file
 * @e_ident: a char pointer to the elf headerfile
 */

void osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
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
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi - prints the ABI if the elf file
 * @e_ident: a char pointer to the elf file
 */


void abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * type - print the type of the elf file
 * @e_type: ELF type
 * @e_ident: elf file containig the elf class
 */


void type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry - prints the entry point of an elf file
 * @e_entry: the  address
 * @e_ident: a pointer to a char array containing the elf class
 * Return: void:
 */

void entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
