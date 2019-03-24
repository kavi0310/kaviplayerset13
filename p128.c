#include<stdio.h>
int main()
{
    int n,a[1000],i,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=a[i]*k;
    }
    if(k%2==0)
    printf("even");
    else
    printf("odd");
}
