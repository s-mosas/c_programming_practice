#include <stdio.h>
int main () {
	int s;
	int e=0,o=0;
	int a[100];
	printf("Enter number of elements:");
	scanf("%d",&s);

	for(int i=0;i<s;i++){
	printf("Enter %d first number:",i+1);
        scanf("%d",&a[i]);
	}
 
        for(int j=0;j<s;j++){
		if(a[j]%2==0){
			e++;}
		else{o++;}
	}

	printf("Even count:%d\n",e);
	printf("Odd count:%d\n",o);
	return 0;
}

