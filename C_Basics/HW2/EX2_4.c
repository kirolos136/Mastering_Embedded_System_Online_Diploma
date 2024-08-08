/*
 ============================================================================
 Name        : EX2_4.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	printf("please enter a number ");
	scanf("%f",&x);
	if(x>0){
		printf("\n%.1f is positive",x);
	}else if(x == 0){
		printf("\n%.1f is zero",x);
	}else{
		printf("\n%.1f is negative",x);
	}
}
