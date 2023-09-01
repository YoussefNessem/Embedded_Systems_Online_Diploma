/*
 * Ex6_main.c
 *
 *  Created on: Sep 1, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	int n, sum=0;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for (int c=0; c<=n; c++)
	{
		sum=sum+c;
	}
	printf("Sum = %d", sum);
}
