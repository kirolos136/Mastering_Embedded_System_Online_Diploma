/*
 ============================================================================
 Name        : Struct_2.c
 Author      : kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C program to add two distances in inch and feet
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct distance {
	int feet;
	float inch;
};

int main(void) {
	struct distance x , y , z;
	int footadded;
	printf("please enter information of first distance:\n");
	printf("enter feet:\n");
	scanf("%d",&x.feet);
	printf("enter inch:\n");
	scanf("%f",&x.inch);
	printf("please enter information of second distance:\n");
	printf("enter feet:\n");
	scanf("%d",&y.feet);
	printf("enter inch:\n");
	scanf("%f",&y.inch);
	footadded = (x.inch+y.inch)/12;
	z.feet = x.feet + y.feet + footadded;
	z.inch = (x.inch+y.inch)-(footadded*12);
	printf("sum of distances = %d '-%.2f",z.feet,z.inch);
}
