#include<stdio.h>
int main()
{
   int n,r,m,i;
   scanf("%d%d%d",&n,&r,&m);
   for(i=1;i<=r;i++)
   {
       for(i=r;i<=m;i++)
       {
           printf("%d x %d = %d
",n,i,n*i);
       }
   }
}