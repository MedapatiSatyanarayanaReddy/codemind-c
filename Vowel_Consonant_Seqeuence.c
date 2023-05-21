#include<stdio.h>
#include<string.h>
int main()
{
    char d[100],c='S';
    scanf("%[^
]s",d);
    int l=strlen(d),j,C,V;
    for(j=0;j<l;j++)
    {
        if(d[j]=='a'||d[j]=='e'||d[j]=='i'||d[j]=='o'||d[j]=='u')
        {
            if(c!='V')
            {
                printf("V");
                c='V';
            }
        }
        else
        {
            if(c!='C')
            {
                printf("C");
                c='C';
            }
        }
    }
}