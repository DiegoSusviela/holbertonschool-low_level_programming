#include "holberton.h"

/**
 * main - omaiga
 * @argc: wopa
 * @argv: dsfdsf
 *
 * Return: the returnas
 */

int main(int argc, char **argv)
{
	int cant_leido, cant_escrito;
	int file_desc_1, file_desc_2;
	int cerrar1, cerrar2;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_desc_1 = open(argv[1], O_RDONLY);

	if (file_desc_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_desc_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (file_desc_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((cant_leido = read(file_desc_1, buffer, BUFSIZ)) > 0)
	{
		cant_escrito = (write(file_desc_2, buffer, cant_leido));
		if (cant_escrito != cant_leido)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (cant_leido == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cerrar1 = close(file_desc_1);

	if (cerrar1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_desc_1 %d\n", file_desc_1);
		exit(100);
	}
	cerrar2 = close(file_desc_2);

	if (cerrar2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_desc_1 %d\n", file_desc_2);
		exit(100);
	}

	return (0);
}
