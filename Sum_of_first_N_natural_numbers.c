#include<stdio.h>
int main()
{
    int n,i,num=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        num=num+i;
    }
    printf("%d",num);
}