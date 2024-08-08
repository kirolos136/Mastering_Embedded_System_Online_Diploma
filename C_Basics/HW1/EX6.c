/*
 ============================================================================
 Name        : EX6.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	float y;
	float temp;
	printf("Enter value of a:");
	scanf("%f",&x);
	printf("\nEnter value of b:");
	scanf("%f",&y);
	temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of a = %.2f",x);
	printf("After swapping, value of b = %.2f",y);
}
