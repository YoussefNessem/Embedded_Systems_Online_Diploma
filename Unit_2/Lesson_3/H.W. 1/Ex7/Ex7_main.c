/*
 * Ex7_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	float a; //a=5
	float b; //b=15
	printf("Enter a value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&a);
	printf("Enter a value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f" ,&b);
	a = a+b; //a=5+15=20
	b = a-b; //b=20-15=5
	a = a-b; //a=20-5=15
	printf("After swapping, value of a =  %f \n", a);
	printf("After swapping, value of b =  %f", b);
}
