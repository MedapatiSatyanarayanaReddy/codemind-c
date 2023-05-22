#include<stdio.h>
int main()
{
    int n,i,es=0,os=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            es++;
        else 
            os++;
    }
    printf("%d %d",es,os);
}