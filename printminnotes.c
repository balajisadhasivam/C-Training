#include<stdio.h>
int main()
{
    int a[8]={1,2,5,10,20,50,100,500},b[8]={0};
    int amnt;
    scanf("%d",&amnt);
    for(int i=7;i>=0;i--)
    {
        if(amnt<a[i])
        continue;
        
        else
        {
            b[i]=amnt/a[i];
            amnt = amnt - b[i]*a[i];
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("%d %d notes\n",b[i],a[i]);
    }
}