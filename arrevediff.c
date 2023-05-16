#include<stdio.h>
int main(){
    int n;
    int sum1=0,sum2=0;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);        
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum1 = sum1+a[i];
        }
        else{
            sum2 = sum2+a[i];
        }
    }
    printf("%d\n",sum1-sum2);
}