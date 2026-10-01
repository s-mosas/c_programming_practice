#include <stdio.h>
int main() {
	int num1,num2;
	printf("We go to swap two numbers\n");
	printf("Enter your first number:");
	scanf("%d",&num1);
	printf("Enter your second number:");
	scanf("%d",&num2);

	int*ptr1=&num1;
	int*ptr2=&num2;

	int dummy;
	dummy=*ptr1;
	*ptr1=*ptr2;
	*ptr2=dummy;

	printf("the swap numbers is:%d %d\n",*ptr1,*ptr2);
	return 0;
}


