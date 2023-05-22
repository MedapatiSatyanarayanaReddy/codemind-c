#include<stdio.h>
int main()
{
    float a[2];
    scanf("%f",&a[0]);
    a[1]=(a[0]*1.8)+32;
    printf("%.2f",a[1]);
    return 0;
}

