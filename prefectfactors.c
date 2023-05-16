#include<stdio.h>
int main(){
    int n;
    int c=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            if(c==0){
                printf("%d",i);
                c=1;
            }
            else{
                printf(",%d",i);
            }
        }
    }
}