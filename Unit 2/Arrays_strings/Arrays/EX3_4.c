/*
 ============================================================================
 Name        : EX3_4.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Insert an element in an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10],num,element,location,i;
	printf("enter number of elements:\n");
	scanf("%d\n",&num);
	for(i=1;i<=num;i++){
		arr[i-1]=i;
	}
	for(i=0;i<num;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nenter element to be inserted:\n");
	scanf("%d",&element);
	printf("\nenter location:\n");
	scanf("%d\n",&location);
	for(i=num+1;i>=1;i--){
		if(i>=location){
			arr[i]=arr[i-1];
		}else if(i == location-1){
			arr[i]= element;
		}else{
			continue;
		}
	}
	for(i=0;i<num+1;i++){
			printf("%d\t",arr[i]);
		}
}
