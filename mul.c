#include<stdio.h>
int main(){
    int n1,n2,t=0;
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n2;i++){
        t=t+n1;
    }
    printf("%d",t);
}