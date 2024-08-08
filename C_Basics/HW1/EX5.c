/*
 ============================================================================
 Name        : EX5.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("please enter a character:\n");
	scanf("%c",&x);
	printf("ASCII value of %c is %d",x,x);
}
