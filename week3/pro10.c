#include <stdio.h>
int main() {
	char a[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char d;
	int ans=0;
	printf("Enter your letter:");
	scanf("%s",&d);

	for(int i=0;i<26;i++){
		if(d==a[i]){
			a[i]=ans;}}
	printf("count of letter is %d.",ans);
	return 0;
}
