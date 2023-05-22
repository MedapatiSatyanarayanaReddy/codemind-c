#include<stdio.h>
int main()
{
	int n,i,j,k,c;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		c=0;
		for(j=i+1;j<n;j++)
		{
			k++;
			if(a[j]>a[i])
				c++;
				if(c>0)
					break;
		}
		if(c>0)	printf("%d ",k);
		else printf("0 ");
	}
	return 0;
}

