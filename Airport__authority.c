#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,k,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
            s=s+1;
        else
            s+=2;
    }
    printf("%d",s);
}

