#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,l=strlen(a),j,k;
    for(i=l-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1;a[j]!=' ' && j<l;j++)
            {
                printf("%c",a[j]);
            }
            printf(" ");
        }
        if(i==0)
        {
            for(k=0;a[k]!=' ' && k<l;k++)
            {
                printf("%c",a[k]);
            }
        }
    }
}
