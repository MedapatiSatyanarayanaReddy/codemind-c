#include<stdio.h>
int ispal(int);
int nextpal(int);
int prime(int);
int main()
{
    int n,k,pp,np;
    scanf("%d",&n);
    np=nextpal(n);
    printf("%d",np);
    return 0;
}
int ispal(int n)
{
    int rev=0,rm,t;
    t=n;
    while(t!=0)
    {
        rm=t%10;
        rev=rev*10+rm;
        t/=10;
    }
    if(rev==n)
        return 1;
    else 
        return 0;
}
int nextpal(int n)
{
    while(1)
    {
        if((ispal(n+1)==1)&&(prime(n+1)==1))
            break;
        else 
            n++;
    }
    return n+1;
}
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	if(c==2)
		return 1;
	else 
		return 0;
}
