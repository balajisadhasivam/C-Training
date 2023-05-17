#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int col=row+row;col<(2*n)-1;col++){
        printf("*");
    }
        printf("\n");
    } 
}