/*
 * Ex3_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */

//error
#include <stdio.h>

void main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f f",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			printf("Largest number = %.2f", a);
		else
			printf("Largest number = %.2f", c);
	}
	else
	{
		if (b>c)
			printf("Largest number = %.2f", b);
		else
			printf("Largest number = %.2f", c);
	}
}
