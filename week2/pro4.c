#include <stdio.h>
int main() {
	int m;

	printf("Enter your 0 - 100 marks:");
	scanf("%d",&m);

	if(m<=100 && m>90) {
	printf("yout grade is 'A'\n"); }
	else if(m<89 && m>70) {
	printf("your grade is 'B'\n"); }
	else if(m<69 && m>50) {
	printf("your grade is'C'\n");  }
	else if(m<49 && m>=36) {
	printf("your grade is 'D'\n"); }
	else if(m<35 && m>=0) {
	printf("your are fail\n");}
	else {
	printf("your enter invalid marks so pls enter velid mark\n");
	return 1;}

        	

	return 0; }
