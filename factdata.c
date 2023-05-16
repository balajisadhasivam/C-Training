#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>=5){
        sum+=n/5;
        n=n/5;
    }
    printf("%d",sum);
}