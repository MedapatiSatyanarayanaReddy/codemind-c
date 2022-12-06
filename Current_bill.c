#include<stdio.h>
int main()
{
    int u,sc,uc;
    float b;
    scanf("%d",&u);
    if(u<=199)
    {
       uc=u*1.20;
       b=uc+100;
       printf("%0.2f",b);
    }
    else if(u>=200 && u<400)
    {
       uc=u*1.50;
       b=uc+100;
       printf("%0.2f",b);
    }
    else if(u>=400 && u<600)
    {
       uc=u*1.80;
       b=uc;
       sc=b*0.15;
       b=b+sc;
       printf("%0.2f",b);
    }
     else if(u>600)
    {
       uc=u*2.00;
       b=uc;
       sc=b*0.15;
       b=b+sc;
       printf("%0.2f",b);
    }
}