#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f[n],c,max=0,min,z1=0,z=0;
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
    for(i=0;i<n;i++)
    {
        if(a[i]==f[i] && max<f[i])
        {
            max=a[i];
            z++;
        }
    }
    min=max;
    for(i=0;i<n;i++)
    {
        if(a[i]==f[i] && min>f[i])
        {
            min=a[i];
            z1++;
        }
    }
    if(z==0 && z1==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}
