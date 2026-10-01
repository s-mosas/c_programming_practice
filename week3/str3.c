#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);

	int lost_string = strlen(str);
	int i=lost_string-1;
	for(i;i>=0;i--){
	printf("%c",str[i]);}
	printf("\n");
	return 0;
}

