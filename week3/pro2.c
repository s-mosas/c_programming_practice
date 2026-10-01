#include <stdio.h>
int main() {
	int s,j;
	int a[100];
	printf("Enter the num of elements:");
	scanf("%d",&s);

	for(int i=0;i<s;i++) {
		printf("Enter your %d number:",i+1);
	        scanf("%d",&a[i]);
	}
	for(j=0;j<s;j++) {
	printf("yor number is:%d\n",a[j]);}
	return 0;
}



