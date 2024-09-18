/*
 ============================================================================
 Name        : EX4_3.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Reverse String Without Using Library Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
	char s[100],c;
	int i;
	printf("enter a string:\n");
	gets(s);
	if(strlen(s)%2==0){
		for(i=0;i<strlen(s)/2;i++){
			c=s[i];
			s[i]=s[strlen(s)-1-i];
			s[strlen(s)-1-i]=c;
		}
	}else{
		for(i=0;i<ceil(strlen(s)/2);i++){
					c=s[i];
					s[i]=s[strlen(s)-1-i];
					s[strlen(s)-1-i]=c;
				}
	}
	printf("%s",s);
}
