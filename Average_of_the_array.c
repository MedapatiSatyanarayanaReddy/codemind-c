#include<stdio.h>
int main()
{
    int n;
    float avg,s=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
        avg=(float)s/n;
    }
    printf("%.2f",avg);
}