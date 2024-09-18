/*
 ============================================================================
 Name        : EX3_5.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Search an element in Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,arr[10],i,element;
	printf("Enter no of elements:\n");
	scanf("%d",&num);
	printf("\nEnter the values:");
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nenter element to be searched:");
	scanf("%d",&element);
	for(i=0;i<num;i++){
			if(arr[i]==element){
				printf("\nnumber found at location:%d",i+1);
				break;
			}
		}
}
