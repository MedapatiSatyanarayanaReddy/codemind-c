#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d%d",&n,&b);
    int a[n][b],i,j,s;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<b;j++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
}
