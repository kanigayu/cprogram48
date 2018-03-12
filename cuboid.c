#include<stdio.h>
int main()
{
int l,b,h,area,vol;
scanf("%d\t%d\t%d",&l,&b,&h);
area=2*((l*b)+(b*h)+(h*l));
printf("\nThe area is%d",area);
vol=l*b*h;
printf("\nThe vol is%d",vol);
return 0;
}
