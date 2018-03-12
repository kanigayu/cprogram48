#include<stdio.h>
int main()
{
int n,sum=0,i,k[20];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&k[i]);
}
for(i=0;i<n;i++)
{
sum=sum+k[i];
}
printf("%d\n",sum);
return 0;
}
