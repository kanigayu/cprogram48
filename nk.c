#include<stdio.h>
int main()
{
int n,s,i,k[20];
scanf("%d\t%d",&n,&s);
for(i=0;i<=n;i++)
{
scanf("%d",&k[i]);
}
for(i=0;i<n;i++)
{
if(k[i]==s)
{
printf("%d",k[i]);
}
}
return 0;
}
