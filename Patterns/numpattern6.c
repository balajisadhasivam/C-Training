#include<stdio.h>
int main(){
    int n;
    int val;
    scanf("%d",&n); 
    for(int row=0;row<n;row++){
        if((row+1)%2==0)
            val=2;
        else
            val=1;
        for(int col=0;col<=row;col++){
        printf("%d",val);
        val=val+2;
    }
        printf("\n");
    }
}