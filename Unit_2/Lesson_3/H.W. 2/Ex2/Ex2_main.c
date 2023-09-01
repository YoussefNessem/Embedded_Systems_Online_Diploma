/*
 * Ex2_main.c
 *
 *  Created on: Aug 31, 2023
 *      Author: Youssef
 */


#include <stdio.h>
 void main()
 {
	 char x;
	 printf("Enter an alphabet: ");
	 fflush(stdin);
	 fflush(stdout);
	 scanf("%c",&x);
	 if (x=='a'||x=='A'||x=='i'||x=='I'
		||x=='e'||x=='E'||x=='o'||x=='O'||x=='u'||x=='U')
	 {
		 printf("%c is a vowel",x);
	 }
	 else
	 {
		 printf("%c is a consonant",x);
	 }
 }
