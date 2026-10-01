#include <stdio.h>
#include <string.h>

int main() {
	char str[100],sub[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);

	getchar();

	printf("Enter the found string:");
	scanf("%[^\n]",sub);

	if(strstr(str,sub) != NULL){
		printf("The string is hear\n");}
	else{
		printf("The string is not hear\n");
	}

	return 0;
}
