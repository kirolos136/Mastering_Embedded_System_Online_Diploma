/*
 ============================================================================
 Name        : struct_3.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : c program to add to complex numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct complex{
	float real;
	float img;
};
int main(void) {
	struct complex x , y ,z ;
	printf("for first complex number:\nenter a real and img numbers:");
	scanf("%f %f",&x.real,&x.img);
	printf("for first complex number:\nenter a real and img numbers:");
	scanf("%f %f",&y.real,&y.img);
	z.real=x.real+y.real;
	z.img=x.img+y.img;
	printf("%.1f+%.1fi",z.real,z.img);
}
