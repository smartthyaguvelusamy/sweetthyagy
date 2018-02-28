#include <stdio.h>
#include<string.h>
int main(void) {
	int i,k;
	scanf("%d %d",&i,&k);
	m=m^k;
	k=m^k;
	m=m^k;
	printf("%d %d",i,k);
	return 0;
}
