/*
 ============================================================================
 Name        : EX3_3.c
 Author      : Kirolos Michel
 Version     :
 Copyright   : Your copyright notice
 Description : This program asks user to enter a matrix (size of matrix is specified by user) and this program finds the
transpose of that matrix and displays it.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,columns,i,j;
	float mat1[10][10],mat2[10][10];
	printf("enter rows and columns:\n");
	scanf("%d %d",&rows,&columns);
	printf("\nenter elements of matrix:");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("\nEnter Elements a%d%d",i+1,j+1);
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(i=0;i<rows;i++){
			for(j=0;j<columns;j++){
				printf("%.1f\t",mat1[i][j]);
			}
		printf("\n");
	}
	for(i=0;i<columns;i++){
			for(j=0;j<rows;j++){
				mat2[i][j]=mat1[j][i];
			}
		}
	printf("\ntransposed matrix:\n");
	for(i=0;i<columns;i++){
				for(j=0;j<rows;j++){
					printf("%.1f\t",mat2[i][j]);
				}
				printf("\n");
			}
}
