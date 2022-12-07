#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int total=a+2*b;
    if(total>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}