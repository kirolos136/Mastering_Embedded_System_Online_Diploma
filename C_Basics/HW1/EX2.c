/*
 ============================================================================
 Name        : EX2.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;
	printf("enter your number:\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
    fflush(stdout);
	printf("your number is :%d",x);
}
