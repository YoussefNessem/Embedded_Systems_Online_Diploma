/*
 * Ex5_main.c
 *
 *  Created on: Sep 1, 2023
 *      Author: Youssef
 */


#include <stdio.h>

void main()
{
	char a;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	if ((a>='a'&& a<='z')||(a>='A'&& a<='Z'))
	{
		printf("%c is an alphabet", a);
	}
	else
	{
		printf("%c is not an alphabet", a);
	}
}
