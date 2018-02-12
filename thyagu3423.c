#include<stdio.h>
#include<conio.h>
int main()
{
    char a[20];
    int i,m,count=0;
    printf("enter the string length");
    scanf("%d",&m);
    printf("enter the string");
    scanf(" %s",&a[i]);
    if(a[i]!='\0')
    {
        for(i=0;i<m;i++)
        {
            count++;
        }
    }
    printf("the total characters in the string is %d",count);
    return0;
}
