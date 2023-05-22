#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(s/n==i)
        {
            c++;
        }
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}
