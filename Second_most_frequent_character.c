#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    char c;
    int i,sum=0,max=0,max1=-1,j;
    for(i=0;i<strlen(a);i++)
    {
        sum=0;
        for(j=0;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                sum++;
            }
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    for(i=0;i<strlen(a);i++)
    {
        sum=0;
        for(j=0;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                sum++;
            }
        }
        if(sum>max1 && sum!=max)
        {
            max1=sum;
            c=a[i];
        }
    }
   if(max1==-1) printf("-1");
   else printf("%c",c);
}

