/*
 ============================================================================
 Name        : EX3_2.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : This program takes n number of element from user(where, n is specified by user), stores data in an array
and calculates the average of those numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,counter;
	float arr[100], sum=0, average;
	printf("please enter the number of data:\n");
	scanf("%d",&n);
	for(counter=0 ; counter<n ;counter++){
		printf("\n%d enter a number:",counter+1);
		scanf("%f",&arr[counter]);
		sum+=arr[counter];
	}
	average = sum/(counter+1);
	printf("\naverage=%f",average);
}
