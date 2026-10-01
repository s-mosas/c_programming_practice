#include <stdio.h>

void rotation(int arr[]){
	printf("\nAfter the rotation\n");
	printf("A=%d\nB=%d\nC=%d\n",arr[2],arr[1],arr[0]);}
	
int main() {
	int arr[3];
	printf("Enter the 3 numbers\n");

	for(int i=0;i<3;i++){
	printf("Enter %d numbers:",i+1);
	scanf("%d",&arr[i]); 
	}

	printf("\nbefore rotation\n");
	printf("A=%d\nB=%d\nC=%d\n",arr[0],arr[1],arr[2]);

	rotation(arr);
        return 0;}

