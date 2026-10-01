#include <stdio.h>

struct student { int id;char name[20];float marks; };

int main() {
	struct student student;

	printf("Enter the name of the student:");
	scanf("%[^\n]",student.name);

	printf("Enter the ID number:");
	scanf("%d",&student.id);

	printf("Enter the marks of the studet:");
	scanf("%f",&student.marks);

	printf("\n----- Student Information -----\n");
	printf("The ID number is:%d\n",student.id);
	printf("The Name is:%s\n",student.name);
	printf("The student marks is:%2.f\n",student.marks);

	return 0;
}
