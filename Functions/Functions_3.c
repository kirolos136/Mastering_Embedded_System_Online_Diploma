/*
 ============================================================================
 Name        : Functions_3.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : program to Reverse a Sentence Using Recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse();
int main(void) {
	printf("please enter a sentence:");
	reverse();

}
void reverse(){
	char c ;
	scanf("%c",&c);
	if(c != '\n'){
		reverse();
		printf("%c",c);

	}

}
