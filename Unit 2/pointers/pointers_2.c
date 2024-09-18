/*
 ============================================================================
 Name        : pointers_2.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to print all the alphabets using a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char first ='A';
	char *pt = &first;
	int i;
	for (i=0;i<26;i++){
		printf("%c ",*pt);
		*pt = *pt +1;
	}

}
