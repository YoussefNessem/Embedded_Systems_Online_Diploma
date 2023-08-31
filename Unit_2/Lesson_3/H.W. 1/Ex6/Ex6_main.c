/*
 * Ex6_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	float a, b, temp=0;
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&a);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a =  %f \n", a);
	printf("After swapping, value of b =  %f", b);
}
