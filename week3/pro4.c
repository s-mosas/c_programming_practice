#include <stdio.h>
int main () {
	int s;
	int a[100];
	int max,min;
	printf("Enter the number of elements:");
	scanf("%d",&s);

	for(int i=0;i<s;i++) {
		printf("Enter your %d number:",i+1);
		scanf("%d",&a[i]);
	}

	max=min=a[0];	

	for(int j=0;j<s;j++) {
		if(max<a[j]){
			max=a[j];
		}
		if(min>a[j]) {
			min=a[j];
		}
	}

		printf("Maxmum value is:%d\n",max);
		printf("Minimum value is:%d\n",min);

		return 0;
	}
