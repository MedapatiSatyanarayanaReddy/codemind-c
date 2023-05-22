#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,rm;
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        sum+=rm;
        pro*=rm;
        n=n/10;
    }
    if(sum==pro)
        printf("Spy Number");
    else 
        printf("Not Spy Number");
    return 0;
}
