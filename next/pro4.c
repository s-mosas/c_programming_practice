#include <stdio.h>
int main() {
int a;
printf("we go to make reverse\n");
printf("Give the count of Array:");
scanf("%d",&a);

int array[a];
for(int i=0;i<a;i++){
	printf("Enter your %d num:",i+1);
	scanf("%d",&array[i]);
}
	int *ptr;
	ptr = array;
        
	printf("the revers Array\n");
	int j=a-1;
	for(j;j>=0;j--){
	printf("%d\t",*(array + j));}

	return 0;}

