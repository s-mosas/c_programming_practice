#include <stdio.h>

struct sensor {int id;float reading;int st;};

int main() {
	int a;
	float min,max;
	printf("Enter the counte of sensor:");
	scanf("%d",&a);
	int fault[a];

        struct sensor sr[a];
	for(int i=0;i<a;i++){
	printf("\nEnter the %d sensor info\n",i+1);
	printf("Enter the Id number:");
       	scanf("%d",&sr[i].id);
	printf("Enter the Reading of the sensor:");
	scanf("%f",&sr[i].reading);
	printf("Enter the status (0/1):");
	scanf("%d",&sr[i].st);} 
	
	min=max=sr[0].reading;

	for(int j=0;j<a;j++){ 
	if(sr[j].reading<max){
		max=sr[j].reading;}
	if(sr[j].reading>min){
		sr[j].reading>min;}}

	for(int k=0;k<a;k++){
		if(sr[k].st==0){
		printf("\nThe fault sensor Ids are:%d\n",sr[k].id); }}

        printf("The Maximum reading:%2.f\n",max);
	printf("The Minimum reading:%2.f\n",min);
	return 0;
}	
