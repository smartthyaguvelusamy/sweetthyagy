#include<stdio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\none");
break;
case 2:
printf("\ntwo");
break;
case 3:
printf("\nthree");
break;
case 4:
printf("\nfour");
break;
case 5:
printf("\nfive");
break;
case 6:
printf("\nsix");
break;
case 7:
printf("\nseven");
break;
case 8:
printf("\neight");
break;
case 9:
printf("\nnine");
break;
case 0:
printf("\n zero");
break;
default:
printf("\nno such number");
}
}
