#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void main(void){
	char *str = "Hello, Holberton";
	
	write (STDOUT_FILENO, str, strlen(str) * sizeof(char));
}
