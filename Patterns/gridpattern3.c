#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==col||row+col==n-1||col==0||row==0||col==n-1||row==n-1||row==n/2)
                printf("*");
            else
                printf(" ");
    }
        printf("\n");
    } 
}