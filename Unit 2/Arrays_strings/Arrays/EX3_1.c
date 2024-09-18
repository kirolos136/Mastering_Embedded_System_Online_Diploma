/*
 ============================================================================
 Name        : EX3_1.c
 Author      : Kirolos Michel Sobhy
 Version     :
 Copyright   : Your copyright notice
 Description : Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
elements of matrix are entered by user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;

	printf("enter the elements of first matrix:\n");
	printf("enter a11:\n");
	scanf("%f",&a[0][0]);
	printf("enter a12:\n");
	scanf("%f",&a[0][1]);
	printf("enter a21:\n");
	scanf("%f",&a[1][0]);
	printf("enter a22:\n");
	scanf("%f",&a[1][1]);

	printf("enter the elements of second matrix:\n");
	printf("enter b11:\n");
	scanf("%f",&b[0][0]);
	printf("enter b12:\n");
	scanf("%f",&b[0][1]);
	printf("enter b21:\n");
	scanf("%f",&b[1][0]);
	printf("enter b22:\n");
	scanf("%f",&b[1][1]);

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]= a[i][j]+b[i][j];
		}
	}
	printf("the sum of matrix:\n%0.1f\t%.1f\n%.f\t%.f",sum[0][0],sum[0][1],sum[1][0],sum[1][1]);
}
