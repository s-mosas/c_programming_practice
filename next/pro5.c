#include <stdio.h>
int main(){
	int a;
	printf("We go to find min and max\n");
	printf("Enter your count of array:");
	sacnf("%d",&a);

	int array[a];
	for(int i=0;i<a;i++){
		printf("Enter your %d num:",i+1);
		scanf("%d",&array[i]);}
	
	int *ptr=array;

	int min,max;






