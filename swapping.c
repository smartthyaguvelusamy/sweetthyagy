#include<stdio.h>
void main()
{
int m,n;
printf("enter two number");
scanf("%d %d",&m,&n);
m=m+n;
n=m-n;
m=m-n;
printf("%d %d",m,n);
}
