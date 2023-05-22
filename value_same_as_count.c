#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
     int s,co=0;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(f[i]==a[i])
        {
            co++;
        }
    }
    printf("%d",co);
}



