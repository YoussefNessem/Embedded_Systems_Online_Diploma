/*
 * Ex4_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	float a,b,mul;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &a,&b);
	mul=a*b;
	printf("Product: %f",mul);
}
