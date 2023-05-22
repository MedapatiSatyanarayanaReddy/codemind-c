#include<stdio.h>
int main()
{
    int i,tc,rm,a,b,c=0,j;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        c=0;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
                rm=j%10;
                if(rm==2||rm==3||rm==9)
                    c++;
        }
        printf("%d
",c);
    }
}
