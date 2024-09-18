/*
 ============================================================================
 Name        : Struct_1.c
 Author      : kirolos michel
 Version     :
 Copyright   : Your copyright notice
 Description : c Program to store information of student using structure
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
	struct student s1;
	printf("enter information of students:\nEnter Name:");
	gets(s1.name);
	printf("enter roll number:\n");
	scanf("%d",&s1.roll_num);
	printf("enter marks:");
	scanf("%.1f",&s1.marks);
	printf("\nstudent Name: %s \nRoll: %d\nMarks:%.f",s1.name,s1.roll_num,s1.marks);
}
