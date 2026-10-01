#include <stdio.h>
int main() {
	int bytes;
	unsigned long long a;
	signed long long b,c;

	printf("Enter your byte number:");
	scanf("%d",&bytes);

	if(bytes<1 || bytes >63){
	printf("pls Enter the value from 0 to 63.\n");
        return 1; }

        a=(1ull<<bytes)-1;
	b=-(1ll<<(bytes-1));
        c=(1ll<<(bytes-1))-1;

	printf("For %d bytes\n",bytes);
	printf("Unsigned range:0 to %llu\n",a);
	printf("singed range:%lld to %lld\n",b,c);

        return 0;
}	
