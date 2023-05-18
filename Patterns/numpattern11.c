#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
     for(int row=1-n;row<n;row++,printf("\n")){
        for(int col=1-n;col<n;col++){
            if(abs(row)>abs(col))
                printf("%d",abs(row)+1);
            else
                printf("%d",abs(col)+1);
        } 
     }
}