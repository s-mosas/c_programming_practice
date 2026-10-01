#include <stdio.h>
#include <string.h>
int main() {
	char str1[100],str2[100];
	int result;
	printf("Enter the first string:");
	scanf("%[^\n]",str1);
        getchar();

	printf("Enter the second string:");
	scanf("%[^\n]",str2);

	result=strcmp(str1,str2);
	if(result==0){
		printf("The 2 string are equal!!\n");}
	else{printf("The 2 string are not equal!!\n");}
	return 0;
}


