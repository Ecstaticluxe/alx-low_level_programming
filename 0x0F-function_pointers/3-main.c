#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *  * struct op - Struct op
 *   *
 *    * @op: The operator
 *     * @f: The function associated
 *      */
typedef struct op
{
	    char *op;
	        int (*f)(int a, int b);
} op_t;
