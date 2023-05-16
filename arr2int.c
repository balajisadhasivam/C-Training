#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int a[100];
    int max=INT_MIN;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
    
}