#include <stdio.h>
#include <stdlib.h>
/**
 * print_magic - Prints the magic numbers.
 * @e_ident: A pointer to the array.
 *
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


