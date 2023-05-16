#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int col=row;col<n;col++){
        printf("*");
    }
        printf("\n");
    }
}