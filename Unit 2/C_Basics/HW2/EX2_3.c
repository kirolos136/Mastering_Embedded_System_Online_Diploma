/*
 ============================================================================
 Name        : EX2_3.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Please enter the first number: ");
	scanf("%f", &x);

	printf("Please enter the second number: ");
	scanf("%f", &y);

	printf("Please enter the third number: ");
	scanf("%f", &z);
	if(x>y){
		if(y>z){
			printf("Largest number is %.2f",y);
		}else{
			printf("Largest number is %.2f",z);
		}
	}else{
		if(x>z){
			printf("Largest number is %.2f",x);
		}else{
			printf("Largest number is %.2f",z);
		}
	}
}
