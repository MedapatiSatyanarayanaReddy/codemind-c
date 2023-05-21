#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int f=0;
    if(a[0]=='0' && a[1]>='1' && a[1]!='0')
    {
        printf("%s AM",a);
    }
    else if(a[0]=='1' && a[1]<'2')
    {
        printf("%s AM",a);
    }
    else if(a[0]=='1' && a[1]=='2')
    {
        printf("12%c%c%c PM",a[2],a[3],a[4]);
    }
    else if(a[0]=='1' && a[1]>'2')
    {
        switch(a[0])
        {
            case '1': printf("0"); break;
        }
        switch(a[1])
        {
            case '3': printf("1"); break;
            case '4': printf("2"); break;
            case '5': printf("3"); break;
            case '6': printf("4"); break;
            case '7': printf("5"); break;
            case '8': printf("6"); break;
            case '9': printf("7"); break;
        }
        f=1;
    }
    else if(a[0]=='2' && a[1]>='0')
    {
        switch(a[1])
        {
            case '0': printf("08"); break;
            case '1': printf("09"); break;
            case '2': printf("10"); break;
            case '3': printf("11"); break;
        }
        f=1;
    }
    else if(a[0]=='0' && a[1]=='0')
    {
        printf("12%c%c%c AM",a[2],a[3],a[4]);
    }
    if(f==1)
    {
        printf("%c%c%c PM",a[2],a[3],a[4]);
    }
}
