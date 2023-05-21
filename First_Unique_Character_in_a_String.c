#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,l=strlen(a),c,j,z;
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            z=1;
            break;
        }
    }
    if(z!=1)
    {
        printf("-1");
    }
}
