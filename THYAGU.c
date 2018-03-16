#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,b,s[3];
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0;i<3;i++)
    {
        s[i]=num%10;
        num=num/10;
    }
    printf("\n%d %d %d",s[2],s[1],s[0]);
    getch();
}
