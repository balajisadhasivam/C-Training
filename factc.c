#include<stdio.h>
int main(){
    int n;
    int fact=1;
    int c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    // printf("%d",fact);
    while (fact!=0)
    {
        if(fact%10==0){
            c++;
        }
        fact=fact/10;
    }
    printf("%d",c);
    
}