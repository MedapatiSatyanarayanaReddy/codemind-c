#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='.')
        {
            printf("[%c]",a[i]);
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}
