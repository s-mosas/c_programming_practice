#include <stdio.h>
int main() {
	char name[100];
	printf("Enter your name:");
	scanf("%[^\n]",name);
	printf("Welcome Mr/Mrs:%s",name);
	return 0;
}
