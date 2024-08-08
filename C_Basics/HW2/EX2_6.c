/*
 ============================================================================
 Name        : EX2_6.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
int main(){
	int n, count, sum=0;
	printf("Enter a number:");
	scanf( "%d" ,&n);
	count=1;
	while (count<=n){
		sum+=count ;
		++count;
	}
	printf("the Sum is = %d", sum);
}
