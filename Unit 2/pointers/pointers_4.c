/*
 ============================================================================
 Name        : pointers_4.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : Write a program in C to print the elements of an array in reverse
order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printInReverse(int arr[],int size);
int main(void) {
	int arr[15],noOfElements,i;
	int *pt= arr;
	printf("Input the number of elements to store in the array (max 15) :\n");
	scanf("%d",&noOfElements);
	for(i=0;i<noOfElements;i++){
		printf("element-%d:\n",i+1);
		scanf("%d",arr+i);
	}
	printf("\n");
	printInReverse(pt,noOfElements);
}
void printInReverse(int *pt, int size){
	int i;
	for(i=size;i>0;i--){
		printf("element-%d:%d\n",i,*(pt+(i-1)));
	}
}
