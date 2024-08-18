/*
 ============================================================================
 Name        : Functions_4.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : C program to calculate power of a number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int num,int pow);
int main(void) {
	int num , pow ;
	printf("please enter the number and the power:");
	scanf("%d %d",&num,&pow);
	printf("%d power %d is %d",num , pow , power(num,pow));
}
int power(int num,int pow){
	if(pow !=0 ){
		return num * power (num , pow - 1);
	}else {
		return 1;
	}
}
