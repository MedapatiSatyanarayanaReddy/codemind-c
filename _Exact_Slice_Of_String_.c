#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int b,c;
    scanf("%d%d",&b,&c);
    int i;
    for(i=b;i<=c;i++)
    {
        printf("%c",a[i]);
    }
}


