#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        switch(a[i])
        {
            case '0':sum=sum+0;
            break;
            case '1':sum=sum+1;
            break;
            case '2':sum=sum+2;
            break;
            case '3':sum=sum+3;
            break;
            case '4':sum=sum+4;
            break;
            case '5':sum=sum+5;
            break;
            case '6':sum=sum+6;
            break;
            case '7':sum=sum+7;
            break;
            case '8':sum=sum+8;
            break;
            case '9':sum=sum+9;
            break;
        }
    }
    printf("%d",sum);
}