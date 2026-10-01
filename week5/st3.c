#include <stdio.h>

struct student {int id;char name[20];int marks;float att;};

int main() {
	int a;
	printf("Enter the totel count of students:");
	scanf("%d",&a);

	struct student s[a];
	for (int i=0;i<a;i++){
		printf("\nEnter the %d student information\n",i+1);
		printf("Enter the Id number:");
		scanf("%d",&s[i].id);
	        printf("Enter the Name:");
		scanf(" %[^\n]",s[i].name);
		printf("Enter the marks (0-100):");
		scanf("%d",&s[i].marks);
		
		if(s[i].marks>=0 && s[i].marks<=100){
			printf("Enter Attendance:");
			scanf("%f",&s[i].att);
		if(s[i].att>=0 && s[i].att<=100){
			printf("Save succesfully\n");
		}
		else{printf("Attendance Error\n");} }
       	else{printf("Marks Error!");} }
	
		printf("\nIds\tNames\t     Marks\tattendance\n");
		
		for(int j=0;j<a;j++){
			printf("%d\t%s\t     %d\t%2.f\t\n",s[j].id,s[j].name,s[j].marks,s[j].att);
		}
		printf("Average:");
		return 0;
}
