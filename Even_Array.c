#include<stdio.h>
int main()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt++;
        }
    }
        if(cnt==n)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}