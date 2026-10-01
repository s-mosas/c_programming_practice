#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char ch;

	printf("Enter the string:");
	scanf("%[^\n]",str);

	getchar();

	printf("Enter the sartch character:");
	scanf("%c",&ch);
	
	char *result = strchr(str,ch);

	if(result != NULL){
		printf("The charecter is find\n");
	
	}
	else{printf("The charecter is not found\n");}

	return 0;
}
