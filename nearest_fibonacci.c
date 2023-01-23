#include<stdio.h>
int fib(int n)
{    
    int a=0,b=1,c,count=0;  
    for(int i=1;i<=n;i++)  
    {        if(n==a)    
    {
        return 1; 
        break;     
        }
        count++;  
        c=a+b;     
        a=b;    
        b=c;   
        }  
        if(count==n)   
        {      
            return 0;  
            }}
            int main()
            {    
                int n,f,b;  
                scanf("%d",&n);  
                for(int i=n;;i++)   
                {        if(fib(i))  
                {
                    f=i;
                    break; 
                    }
                    }
                    for(int i=n;;i--)
                    {
                        if(fib(i)) 
                        {
                            b=i;            
                            break;
                            }
                            }
                            int d1=f-n;
                            int d2=n-b;
                            if(d1<d2)  
                            {       
                                printf("%d",f);   
                                }    
                                else if(d1==d2)  
                                {
                                    printf("%d %d",b,f);
                                    }    else  
                                    {
                                        printf("%d",b);    }        }