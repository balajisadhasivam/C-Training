#include <stdio.h>
int perfect(int n){
    int result=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            result=result+i;
        }
    }
    if(result==n){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
   //int n;
   //scanf("%d",&n);
    for(int i=1;i<=1000;i++){
        int result = perfect(i);
        if(result==1){
            printf("%d ",i);    
        }
//    if(result==1){
//     printf("Perfect Number");
//    }
//    else{
//     printf("Imperfect");
//    }
   
    }
    return 0;
}
