#include <stdio.h>
int main() {
	int totel;
	printf("Enter the totel student count:");
	scanf("%d",&totel);

	int roll[totel];
	int id[totel];
	char name[totel][20];
	int mark[totel];

	printf("The ID number start with 1\n");

	for(int i=0;i<totel;i++){	
	printf("\nEnter the id number of the student %d:",i+1);
        scanf("%d",&id[i]);	
	printf("Enter roll number of the student %d:",i+1);
	scanf("%d",&roll[i]);
	printf("Enter name of the student %d:",i+1);
       	scanf("%s",name[i]);
	printf("Enter the mark of the student%d:",i+1);
	scanf("%d",&mark[i]);
	}
        int d;
	printf("\nEnter the id number:");
	scanf("%d",&d);

	printf("\nThe Id number is %d\n",id[d-1]);
	printf("The name is %s\n",name[d-1]);
	printf("The roll number:%d\n",roll[d-1]);
	printf("The Mark is:%d\n",mark[d-1]);

return 0;}

