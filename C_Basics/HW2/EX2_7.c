/*
 ============================================================================
 Name        : EX2_7.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, count=1,factorial=1;
	printf("please enter a number:\n");
	scanf("%d",&x);
	if(x<0){
		printf("Error...Factorial of negative number doesn't exist.");
	}else if(x == 0){
		printf("the factorial is zero");
	}else{
		while(count<=x){
			factorial*=count;
			count++;
		}
		printf("the factorial is %d",factorial);
	}
}

