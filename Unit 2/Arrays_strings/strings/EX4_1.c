/*
 ============================================================================
 Name        : EX4_1.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Find the Frequency of Characters in a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char c,str[200];
	int freq=0,i;
	printf("Enter a String;\n");
	gets(str);
	printf("Enter a character;\n");
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++){
		if(str[i]==c){
			freq++;
		}
	}
	printf("the freq is %d",freq);
}
