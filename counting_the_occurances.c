#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    scanf("
");
    char s[100];
    scanf("%s",s);
    int i,l=strlen(a),c=0;
    for(i=0;i<l;i++)
    {
        if(a[i]==s[0])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}