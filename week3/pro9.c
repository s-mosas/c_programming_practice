#include <stdio.h>
int main() {
	int a=0;
	printf("1.Mosas\n2.Durai sing\n3.Jegadeesh\n");
	printf("Enter your num:");
	scanf("%d",&a);
	
	

	char name[3][20]={"S.Mosas","A.Durai sing","G.Jegadeesh"};
	int roll[3]={11,03,06};
	int mark[3]={100,100,100};
	char college[20]="PET Engg collage";

	printf("\nWELCOME Mr.%s\n",name[a-1]);
	printf("BE.EEE\n");
	printf("Roll number:%d\n",roll[a-1]);
	printf("Marks:%d\n",mark[a-1]);
	printf("%s\n",college);

	return 0;
}


