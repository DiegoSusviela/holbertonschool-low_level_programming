#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void main(void){
	write (STDOUT_FILENO, "Hello, Holberton\n", ((16 * sizeof(char)) + 1));
}
