/*
 * Ex7_main.c
 *
 *  Created on: Sep 1, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	int a, factorial=1;
		printf("Enter an integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&a);
		if (a>0)
		{
			for (int i=1; i<=a; i++)
			{
				factorial=factorial*i;
			}
			printf("Factorial = %d", factorial);
		}
		else if (a<0)
		{
			printf("Error!!! Factorial of negative number doesn't exist");
		}
		else
		{
			printf("Factorial of zero = 1");
		}
}
