#include<stdio.h>
int main()
{
    int a[3],b[3],i,as=0,bs=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
        if(a[i]>b[i])
            as++;
        else if(a[i]<b[i])
            bs++;
    }
    printf("%d %d",as,bs);
    return 0;
}
