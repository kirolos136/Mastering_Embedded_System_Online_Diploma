/*
 ============================================================================
 Name        : Pointers_1.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to demonstrate how to handle the pointers
in the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29;
	printf("Address of m : 0x%llx\n",&m);
	printf("Value of m : %d\n",m);

	int *ab = &m;
	printf("Address of ab : 0x%llx\n",ab);
	printf("content of ab : %d\n",*ab);

	m = 34;
	printf("Address of ab : 0x%llx\n",ab);
	printf("content of ab : %d\n",*ab);

	*ab = 7;
	printf("Address of m : 0x%llx\n",&m);
	printf("Value of m : %d\n",m);
}
