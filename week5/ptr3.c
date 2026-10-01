#include <stdio.h>

int main() {
	int count;
	int sum=0;
	int min,max;
	float average;
	printf("Enter count of Array:");
	scanf("%d",&count);
	int array[count];

	for(int i=0;i<count;i++){
	printf("Enter the %d Number:",i+1);
	scanf("%d",&array[i]);
	}
	min=max=array[0];

	for(int j=0;j<count;j++){
	sum+=array[j];
	if(min<array[j]){array[j]=min;}
	if(max>array[j]){array[j]=max;}
	}
	average=(float)sum/count;
	if(average>=80){printf("status: Excellent\n");}
	else if(average>=60){printf("status: Good\n");}
	else if(average>=40){printf("status: Average\n");}
	else{printf("status: Poor\n");}

	printf("The Minimum value is:%d\n",min);
	printf("The Maximum value is:%d\n",max);
	printf("The Sum of the array:%d\n",sum);
	printf("The Average value is:%1.f\n",average);

	return 0;
}
