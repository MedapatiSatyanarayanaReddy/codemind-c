#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[100];
    int i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        c=0;
        for(j=0;a[j]!=NULL;j++)
        {
            if(a[j]==a[j+1])
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}
