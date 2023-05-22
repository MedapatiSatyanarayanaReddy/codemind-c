#include<stdio.h>
int main()
{
    int n,i,j,c,d=0;
    scanf("%d",&n);
    float a[n],avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j) a[j]=0;
            }
        }
        if(a[i]==c)
        {
                d++;
                avg+=a[i];
        }
    }
    avg/=d;
     if(d>0)   printf("%.2f",avg);
     else printf("-1");
}
