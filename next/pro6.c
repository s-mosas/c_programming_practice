#include <stdio.h>
#include <time.h>

int add (int d,int c)
{int y=d+c;
printf("%d\n",y);
return y; }

int raja (int g){
char t={"pass"};
char u={"Fail"};
char m=g>35?t:u;
return m;}

int main(){
	int a,b;
	printf("enter two num:\n");
	scanf("%d %d",&a,&b);

	int result=add(a,b);
	printf("%d\n",result);

	int f;
	printf("Enter the mark:");
	scanf("%d",&f);
	printf("%s\n",raja(f));

	return 0;
	}

