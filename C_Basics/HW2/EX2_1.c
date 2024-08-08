/*
 ============================================================================
 Name        : EX2_1.c
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
	printf("enter a number:");
	scanf("%d",&x);
	if(x % 2 == 0){
		printf("\n%d is even.",x);
	}else{
		printf("\n%d is odd.",x);
	}
}
