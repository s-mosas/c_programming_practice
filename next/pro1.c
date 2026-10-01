#include <stdio.h>
	 void increse(int*a){
	printf("the updated value:%d\n",*a+10);
	printf("Add of pointer:%p\n",a); }


		
int main() {
	int a=1;
	int*ptr=&a;
	increse(ptr);
		return 0;
}


