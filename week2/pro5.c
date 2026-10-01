#include <stdio.h>
int main(void) {
	int x;
	printf("1.Addition\n2.subtractin\n3.multiplication\n4.division\n5.remainder\n");
	printf("Enter your operation:");
	scanf("%d",&x);

	int a,b;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);

	switch(x) {
	case 1:
	printf("answer:%d\n",a+b);
	break;

	case 2:
	printf("answer:%d\n",a-b);
	break;

	case 3:
	printf("answer:%d\n",a*b);
	break;

	case 4:
	if(b!=0) {
	printf("answer:%d\n",a/b); }
	else{ printf("invalid data:cannot divide by zero\n"); }
	break;

	case 5:
	if(b!=0) {
	printf("answer:%d\n",a%b); }
	else{ printf("Invalid data:cannot find remainder with zero.\n");}
        break;
        defauld:
        printf("Invalid opration.\n");
	return 1;}

	return 0;
}

