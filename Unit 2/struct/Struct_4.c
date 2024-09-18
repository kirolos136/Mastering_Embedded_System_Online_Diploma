/*
 ============================================================================
 Name        : Struct_4.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : c program to store inforamtion of students using structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[50];
	int roll_num;
	float marks;
};
int main(void) {
	struct student s[10];
	int i;
	for(i=0;i<10;i++){
		printf("enter information of student %d:\nEnter Name:\n",i+1);
		scanf("s",&s[i].name);
		printf("enter roll number:\n");
		scanf("%d",&s[i].roll_num);
		printf("enter marks:\n");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<10;i++){
		printf("\nstudent Name: %s \nRoll: %d\nMarks:%.f\n",s[i].name,s[i].roll_num,s[i].marks);
	}

}
