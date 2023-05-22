#include<stdio.h>
int main()
{
    int no,es=0,os=0,c=0,rm;
    scanf("%d",&no);
    while(no!=0)
    {
        rm=no%10;
        c++;
        if(rm%2==0)
          es++;
        else if(rm%2!=0)
           os++;
        no/=10;
    }
    if(es==c)
      printf("Even");
    else if(os==c)
      printf("Odd");
    else 
      printf("Mixed");
      
}
