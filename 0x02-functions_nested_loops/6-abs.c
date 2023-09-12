#include <stdio.h>
#include "main.h"
 /**
 * main - check the code
 *function that computes the absolute value of an integer
 *Prototype: int _abs(int);
 */

int _abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

