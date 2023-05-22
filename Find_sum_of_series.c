#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/k);
        k++;
    }
    printf("%.2f",sum);
}

