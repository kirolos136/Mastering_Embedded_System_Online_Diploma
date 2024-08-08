/*
 ============================================================================
 Name        : EX7.c
 Author      : Kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
		int a;
		int b;
		printf("Enter value of a:");
		scanf("%d",&a);
		printf("\nEnter value of b:");
		scanf("%d",&b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("\nAfter swapping, value of a = %d",a);
		printf("\nAfter swapping, value of b = %d",b);
}
