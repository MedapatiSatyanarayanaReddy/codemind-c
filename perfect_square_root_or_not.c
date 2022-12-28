#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            s++;
        }
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}