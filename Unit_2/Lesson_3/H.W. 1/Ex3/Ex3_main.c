/*
 * Ex3_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	int a,b, sum;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a ,&b);
	sum=a+b;
	printf("Sum: %d",sum);
}
