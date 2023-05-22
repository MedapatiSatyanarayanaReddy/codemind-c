#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if((a[i]%2==0 && a[i+2]%2==1) || (a[i]%2==1 && a[i+2]%2==0))
        {
            c++;
        }
    }
        if((a[n-2]%2==0 && a[0]%2==1)|| (a[n-2]%2==1 && a[0]%2==0) )
        {
            c++;
        }
        if((a[n-1]%2==0 && a[1]%2==1) || (a[n-1]%2==1 && a[1]%2==0))
        {
            c++;
        }
    printf("%d",c);
}

