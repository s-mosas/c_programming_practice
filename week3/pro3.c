#include <stdio.h>
int main() {
	int s,j,d=0;
	int a[100];
	int sum=0;

	printf("Enter the number of elements:");
	scanf("%d",&s);

	for(int i=0;i<s;i++) {
		printf("Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<s;j++) {
		sum+=a[j];}
	d=sum/s;

	printf("Sum of the value:%d\n",sum);
	printf("Avrage value:%d\n",d);

	return 0;
}


