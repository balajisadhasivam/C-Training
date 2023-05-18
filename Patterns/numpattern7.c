#include<stdio.h>
int main(){
    int n;
    int val;
    int odd=1,even=2;
    scanf("%d",&n); 
    for(int row=0;row<n;row++,printf("\n")){
        if((row+1)%2==0)
            val=even;
        else    
            val=odd;
        for(int col=0;col<=row;col++){
            printf("%d",val);
            val=val+2;
        }
        if(val%2==0)
            even=val;
        else
            odd=val;
        
    } 
}