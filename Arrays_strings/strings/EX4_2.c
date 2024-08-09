/*
 ============================================================================
 Name        : EX4_2.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : Program to Find the Length of a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s[100];
	int len=0;
	printf("please enter a string:");
	gets(s);
	while(s[len]!=0){
		len++;
	}
	printf("\nLength of string: %d",len);
}
