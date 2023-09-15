#include "3-op_functions.c"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *get_op_func -gets operator function 
 * @s: operator
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{

