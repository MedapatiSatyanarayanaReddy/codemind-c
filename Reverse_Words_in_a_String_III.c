#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,j,l=strlen(a),l1;
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            for(j=i-1;a[j]!=' '&&j>=0;j--)
            {
                printf("%c",a[j]);
            }
            printf(" ");
        }
        if(i==l-1)
        {
            for(j=i;a[j]!=' '&&j>=0;j--)
            {
                printf("%c",a[j]);
            }
        }
    }
}
