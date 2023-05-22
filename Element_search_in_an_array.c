#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s;
        scanf("%d",&s);
        if(a[i]==s)
        {
            c++;
        }
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}
