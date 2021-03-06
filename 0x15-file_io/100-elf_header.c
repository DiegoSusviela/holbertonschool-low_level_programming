#include "holberton.h"
#include <elf.h>

/**
 * is_elf - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void is_elf(unsigned char *e_i)
{
	if (e_i[0] == 0x7f && e_i[1] == 'E' && e_i[2] == 'L' && e_i[3] == 'F')
		printf("ELF Header:\n");
	else
	{
		dprintf(STDERR_FILENO, "Error: Not valid ELF\n");
		exit(98);
	}
}

/**
 * p_mag - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void p_mag(unsigned char *e_i)
{
	register int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%02x ", e_i[i]);
	printf("%02x\n", e_i[i]);
}

/**
 * p_class - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void p_class(unsigned char *e_i)
{
	printf("  Class:                             ");
	switch (e_i[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("This class is invalid\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_i[EI_CLASS]);
	}
}

/**
 * p_data - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void p_data(unsigned char *e_i)
{
	printf("  Data:                              ");
	switch (e_i[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_i[EI_DATA]);
	}
}

/**
 * p_ver - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void p_ver(unsigned char *e_i)
{
	printf("  Version:                           ");
	if (e_i[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_i[EI_VERSION]);
}


/**
 * p_osabi - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */

void p_osabi(unsigned char *e_i)
{
	printf("  OS/ABI:                            ");
	switch (e_i[EI_OSABI])
	{
		case ELFOSABI_SYSV:
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
			printf("<unknown: %x>\n", e_i[EI_OSABI]);
	}
}

/**
 * print_t - omaiga
 * @e_type: wopa
 * @e_i: alkdsnald
 *
 * Return: the returnas
 */


void print_t(unsigned int e_type, unsigned char *e_i)
{
	if (e_i[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
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
 * big_endian - omaiga
 * @x: wopa
 *
 * Return: the returnas
 */


unsigned int big_endian(unsigned int x)
{
	return (((x >> 24) & 0x000000ff) |
		((x >> 8) & 0x0000ff00)  |
		((x << 8) & 0x00ff0000)  |
		((x << 24) & 0xff000000));
}

/**
 * print_e - omaiga
 * @e_entry: wopa
 * @e_i: akldnak
 *
 * Return: the returnas
 */

void print_e(unsigned int e_entry, unsigned char *e_i)
{
	if (e_i[EI_DATA] == ELFDATA2MSB)
		e_entry = big_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}

/**
 * print_elf - omaiga
 * @e_i: wopa
 *
 * Return: the returnas
 */


void print_elf(unsigned char *e_i)
{
	p_mag(e_i);
	p_class(e_i);
	p_data(e_i);
	p_ver(e_i);
	p_osabi(e_i);
}

/**
 * print_t_e - omaiga
 * @e_type: wopa
 * @e_entry: akdnl
 * @e_i: akjldbnak
 *
 * Return: the returnas
 */

void print_t_e(unsigned int e_type, unsigned int e_entry, unsigned char *e_i)
{
	print_t(e_type, e_i);
	print_e(e_entry, e_i);
}

/**
 * main - omaiga
 * @argc: wopa
 * @argv: akdnl
 *
 * Return: the returnas
 */

int main(int argc, char *argv[])
{
	register int fd, to_read;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Malloc error\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_read = read(fd, header, sizeof(Elf64_Ehdr));
	if (to_read < 0)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	is_elf(header->e_ident);
	print_elf(header->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
	print_t_e(header->e_type, header->e_entry, header->e_ident);
	free(header);
	if (close(fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
	return (0);
}
