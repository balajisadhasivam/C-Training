#include<stdio.h>
int main(){
    int n1;
    int n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1%2!=0)
        n1=n1+1;
    printf("%d",n1);
    for(int i=n1+2;i<n2;i=i+2){
        printf(",%d",i);
    }   
    return 0;
}
