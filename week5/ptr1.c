#include <stdio.h>
int main () {
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int *ptr;
	ptr=&num;
	printf("Before Update:%d\n",*ptr);
	printf("Enter the Update number");
	scanf("%d",&*ptr);
	printf("After Update:%d\n",*ptr);
	return 0;
}
