/*
 ============================================================================
 Name        : Functions_2.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C program to Calculate Factorial of a Number Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int f);
int main(void) {
	int x;
	printf("enter a positive Number:\n");
	scanf("%d",&x);
	printf("\nFactorial of %d : %d",x,factorial(x));
}
int factorial(int f){
	if(f >1)
		return f*factorial(f-1);
	else if(f == 1)
		return 1;
}
