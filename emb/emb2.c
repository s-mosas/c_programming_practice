#include <stdio.h>
int main () {
	int bin=0b00000101;
	printf("1.Our bin value is 00000101 and our opration is bin|(1<<3)\n");
	printf("%d\n",bin|(1<<3));
	printf("\n00000101\n00001000\n--------\n00001101\n");

	int bin1=0b10111111;
	printf("\n2.clear 5th bit,op is bin1 & ~(0<<5)\n");
	printf("10111111\n11011111\n--------\n10011111\n");
	printf("the ans is:%d\n",bin1 & ~(1<<5));


	return 0;
}
