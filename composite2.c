#include <stdio.h>
int main()
{
    int k, i, flag = 0;
    scanf("%d",&k);
    for(i=2; i<=k/2; ++i)
    {
        if(k%i==0)
        {
            flag=1;
            break;
        }
    }
 
    if (flag==0)
        printf("no");
    else
        printf("yes");
 
    return 0;
}
