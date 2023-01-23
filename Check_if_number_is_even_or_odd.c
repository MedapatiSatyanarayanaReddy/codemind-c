#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Even");
    } else if(a%2!=0){
        printf("Odd");
    }
}