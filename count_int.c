#include "monty.h"

/**
 * count_int:counts number of integers
 * @num:int to be counted
 * Return:number of int  in  num
 */
long unsigned int count_int(int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}
