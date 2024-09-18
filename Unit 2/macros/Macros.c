/*
 ============================================================================
 Name        : Macros.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : C program that calculates the area of a circle using macros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define Area(r) (PI*r*r)
int main(void) {
	float raduis,area;
	printf("Enter the radius of the circle: ");
	scanf("%f",&raduis);
	area=Area(raduis);
	 printf("The area of the circle with radius %.2f is %.2f\n", raduis, area);
}
