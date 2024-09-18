/*
 ============================================================================
 Name        : EX2_5.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("enter a Character:");
	scanf("%c",&c);
	if(((65<=c)&&(c<=90))||((97<=c)&&(c<=122))){
		printf("\n%c is an alphabet",c);
	}else{
		printf("\n%c is not an alphabet",c);
	}
}
