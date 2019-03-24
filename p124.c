#include<stdio.h>
int main()
{
    int n,a[1000],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==5)
    {
    for(k=2;k<1000;k++)
    {
        if((k%a[0]==0)&&(k%a[1]==0)&&(k%a[2]==0)&&(k%a[3]==0)&&(k%a[4]==0))
        {
           printf("%d ",k);
           break;
        }
    }
    }
    else
    {
    for(k=2;k<1000;k++)
    {
        if((k%a[0]==0)&&(k%a[1]==0))
        {
           printf("%d ",k);
           break;
        }
    }
    }
    
}
