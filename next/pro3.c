#include <stdio.h>
int main(){
	int first_num,second_num;
	printf("We go to find the larger number!!\n");
	printf("Enter your first number:");
	scanf("%d",&first_num);

	printf("Enter your second number:");
	scanf("%d",&second_num);

	int*ptr1;
	ptr1=&first_num;

	int*ptr2=&second_num;

	if(*ptr1>*ptr2){
	printf("The larger number is %d comper to %d\n",*ptr1,*ptr2);}
	else if(*ptr1<*ptr2){
	printf("The larger number is %d comper to %d\n",*ptr2,*ptr1);}
	else{printf("Error!,Enter the crect numbers\n");}

	return 0;
	}

