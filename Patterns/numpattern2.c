#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++,printf("\n")){
        for(int col=0;col<n;col++){
        printf("%d",row+1);
    }
    }
}