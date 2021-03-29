#include "holberton.h"

/**
 * check_arguments - omaiga
 * @argc: wopa
 *
 * Return: the returnas
 */

void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - omaiga
 * @fd: wopa
 * @argv: dsfdsf
 * @flag: adns
 *
 * Return: the returnas
 */

void check_read(int fd, char **argv, int flag)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[flag]);
		if (flag == 1)
			exit(98);
		exit(99);
	}
}

/**
 * check_write - omaiga
 * @cant_escrito: wopa
 * @argv: dsfdsf
 * @cant_leido:  dnaold
 * @flag: akldjnlkad
 *
 * Return: the returnas
 */

void check_write(int cant_escrito, int cant_leido, char **argv, int flag)
{
	if (cant_escrito != cant_leido)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[flag]);
		exit(99);
	}
}

/**
 * check_close - omaiga
 * @cerrar: wopa
 * @fd: dsfdsf
 *
 * Return: the returnas
 */

void check_close(int cerrar, int fd)
{
	if (cerrar == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - omaiga
 * @argc: wopa
 * @argv: dsfdsf
 *
 * Return: the returnas
 */

int main(int argc, char **argv)
{
	int cant_leido, cant_escrito, fd1, fd2;
	int cerrar1, cerrar2;
	char buffer[BUFSIZ];

	check_arguments(argc);

	fd1 = open(argv[1], O_RDONLY);
	check_read(fd1, argv, 1);

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);	
	if (fd2 == -1)
		check_write(1, 1, argv, 2);

	while ((cant_leido = read(fd1, buffer, BUFSIZ)) > 0)
	{
		cant_escrito = (write(fd2, buffer, cant_leido));
		check_write(cant_escrito, cant_leido, argv, 2);
	}
	check_read(cant_leido, argv, 1);

	cerrar1 = close(fd1);

	check_close(cerrar1, fd1);
	cerrar2 = close(fd2);

	check_close(cerrar2, fd2);

	return (0);
}
