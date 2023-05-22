#include<stdio.h>
int main()
{
    int n,s=0,s1=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
        else
        {
            s1=s1+a[i];
        }
    }
    if(s>s1)
    printf("%d",s-s1);
    else
    printf("%d",s1-s);
}
