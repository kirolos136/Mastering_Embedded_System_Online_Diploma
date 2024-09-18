/*
 ============================================================================
 Name        : Functions_1.c
 Author      : Kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : EX1: Prime Numbers Between two Intervals by Making User-defined
 Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime_numbers(int num,int end);
int main(void) {
	int start , end , num;
	printf("enter two numbers:");
	scanf("%d %d",&start ,&end);
	num = start + 1 ;
	prime_numbers(num ,end);
}
void prime_numbers(int num ,int end){
	int i ,flag =1;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag = 0;
			break;
		}
	}
	if(flag)
		printf("%d ",num);
	if(num < end){
		prime_numbers(++num,end);
	}

}
