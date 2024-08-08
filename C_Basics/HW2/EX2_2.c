/*
 ============================================================================
 Name        : EX2_2.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("enter a character:");
	scanf("%c",&c);
	switch(c){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
		printf("\n%c is Vowel",c);
	break;
	default:
		printf("\n%c is consonant",c);
	break;
	}
}
