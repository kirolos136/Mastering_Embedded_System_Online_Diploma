/*
 ============================================================================
 Name        : pointers_3.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to print a string in reverse using a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//void dumpmem(char *pt, int size);
void reverseString(char *point);
int main(void) {
	char arr[]="w3resource";
	char* ptoc = arr;
	printf("Input a string : %s",arr);
	reverseString(ptoc);
}

void reverseString(char *point){
	int i = 0;
	while(*point != '\0'){
		point++;
		i++;
	}
	point--;
	printf("\nReverse of the string is : ");
	while(i>0){
		printf("%c",*point);
		point--;
		i--;
	}
}
//void dumpmem(char *pt, int size){
//	int i = 0;
//	for(i=0;i<size;i++){
//		printf("address:%p value :%c\n",pt,(unsigned char)*pt);
//		pt++;
//	}
//}
