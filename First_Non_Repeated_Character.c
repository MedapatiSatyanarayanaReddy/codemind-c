#include<stdio.h>
#include<string.h>
int main()
{
    int n,n1,z;
    scanf("%d
",&n);
    char a[100];
    int i,j,k,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&n1);
        scanf("
%[^
]s",a);
        int z=0;
        for(j=0;j<n1;j++)
        {
            c=0;
            for(k=0;k<n1;k++)
            {
                if(a[j]==a[k] && j!=k)
                {
                    c++;
                }
            }
            if(c!=0)
            {
                z++;
            }
            else if(c==0)
            {
                printf("%c",a[j]);
                break;
            }
        }
        if(z==n1)
        {
            printf("-1");
        }
        printf("
");
    }
}
