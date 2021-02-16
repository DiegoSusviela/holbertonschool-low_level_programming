#include "holberton.h"

/**
 * _strlen - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int finder1 = 0, finder2, num = 0, sign = 1;

	while ((*(s + finder1) > '9' || *(s + finder1) < '0') && (*(s + finder1) != '\0'))
	{
		if (*(s + finder1) == '-')
			sign *= -1;
		finder1++;
	}
	finder2 = finder1;
	while ((*(s + finder2) >= '0') && (*(s + finder2) <= '9'))
	{
		num = num * 10 + (*(s + finder2) - '0');
        num *= sign;
		finder2++;
	}
	return (num);
}
