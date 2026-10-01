#include <stdio.h>
int main() {
	printf("Enter your number:");
	int a;
	scanf("%d",&a);

	if(a>0) {
	printf("%d is positive number\n",a); }
	else if (a==0) {
	printf("It is zero\n"); }
	else{
	printf("%d is negative number\n",a); }

	return 0;
}
