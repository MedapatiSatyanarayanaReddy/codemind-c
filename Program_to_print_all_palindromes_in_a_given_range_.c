#include<stdio.h>
int ispal(int);
int main()
{
	int a,b,i,t,rm,rev=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		rev=0;
		t=i;
		while(t!=0)
		{
			rm=t%10;
			rev=rev*10+rm;
			t=t/10;
		}	
		if(rev==i)
			printf("%d ",rev);
	}
}
