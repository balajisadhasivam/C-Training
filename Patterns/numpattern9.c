#include<stdio.h>
int main(){
    int n;
    int arr[100][100];
    scanf("%d",&n); 
    for(int row=0;row<n;row++,printf("\n")){
        for(int col=0;col<=row;col++){
            if(col==0||row==col)
                arr[row][col]=1;
            else
                arr[row][col]=(arr[row-1][col-1]+arr[row-1][col]);
        }
        for(int i=0;i<=row;i++){
            printf("%d",arr[row][i]);
        }
    } 
}