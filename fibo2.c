#include<stdio.h>
int main()
{
    int a=0, b=1, c, n;
    scanf("%d",&n);
    if(n<=1)
        printf("%d ",n);
    else{
        for (int i=2; i<n; i++)
        {
            c = a+b;
            a=b;
            b=c;
        }
        printf("%d ",c);
    }
    
}