#include<stdio.h>  
int main()
{    
    int n,i;    
    scanf("%d",&n);
    if(n==1){
        printf("Not a Prime");
        return 0;
    }        
    for(i=2;i<n/2;i++)//for(int i=2;i*i<=n;i++)    
    {    
        if(n%i==0)    
        {    
            printf("Number is not prime");        
            return 0;  
        }    
    }        
    printf("Number is prime"); 
}  