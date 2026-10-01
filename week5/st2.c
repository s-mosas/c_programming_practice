#include <stdio.h>

struct student { int id;char name[20];float marks;};


int main() {
struct student s[3];

for(int i=1;i<=3;i++){
printf("\n----- Student %d -----\n",i);
printf("Enter the Id number of the student:");
scanf("%d",&s[i-1].id);
printf("Enter the Name of the student:");
scanf("%[^\n]",s[i-1].name);
printf("Enter the Marks of the student:");
scanf("%f",&s[i-1].marks);
}

printf("\nAll student infermation\n");
for(int j=0;j<3;j++){
printf("\nThe Id number is:%d\n",s[j].id);
printf("The Name is:%s",s[j].name);
printf("The marks is:%2.f",s[j].marks);
}

return 0;
}



