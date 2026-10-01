#include <stdio.h>
int main() {
	int array[]={0,1,2,3,4};
	for(int i=4;i>=0;--i){
		printf ("%d\t",array[i]);
	array[i]=array[i-1];
	printf("%d",array[i]);}
		return 0;
}
