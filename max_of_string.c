#include <stdio.h>
#include <string.h>

int main () 
{
   char a[100];
   scanf("%[^
]s",a);
   char temp;
   int i,j;
   int n=strlen(a);
   for(i=1;i<n;i++) 
   {
      for(j=0;j<n-1;j++) 
      {
         if (a[j]>a[j+1]) 
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
  printf("%c",a[n-1]);
}


