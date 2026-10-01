#include <stdio.h>
int main() {
	int a[100];
	int n;

	printf("how many valus store you want:");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
	printf("Enter your %d numbers:",i+1);
	scanf("%d",&a[i]);
	}

        printf("Enter your count of number:");
        int c;
        scanf("%d",&c);
      
        printf("your number is:%d\n",a[c-1]);
	return 0;
}
