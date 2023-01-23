#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n>2){
        a=(n*(n-3))/2;
        printf("%d",a);
    } else {
        printf("0");
    }
}

