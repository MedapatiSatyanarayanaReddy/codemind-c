#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                d++;
            }
        }
        if(a[i]%2==0)
            c++;
    }
    if(c==d)
        printf("True");
    else 
        printf("False");
    return 0;
}

