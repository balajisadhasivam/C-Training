#include<stdio.h>
int main(){
    int n;
    int t=1;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
        printf("%d",t++);
    }
        printf("\n");
    }
}