/*
 * Ex8_main.c
 *
 *  Created on: Sep 1, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	char ch;
	float a,b,result;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &a, &b);
	switch (ch)
	{
	case '+':
	{
		result=a+b;
		printf("%0.1f %c %0.1f = %0.1f",a,ch,b,result);
		break;
	}
	case '-':
	{
		result=a-b;
		printf("%0.1f %c %0.1f = %0.1f",a,ch,b,result);
		break;
	}
	case '*':
	{
		result=a*b;
		printf("%0.1f %c %0.1f = %0.1f",a,ch,b,result);
		break;
	}
	case '/':
	{
		result=a/b;
		printf("%0.1f %c %0.1f = %0.1f",a,ch,b,result);
		break;
	}
	}
}
