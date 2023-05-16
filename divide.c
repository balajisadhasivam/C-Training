#include<stdio.h>
#include<math.h>
int main(){
    int  n1,n2,t=0,c=0;
    scanf("%d %d",&n1,&n2);
    while (n1!=0)
    {
        n1=n1-n2;
        c++;
    }
    printf("%d",c);
}