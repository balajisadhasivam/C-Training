#include<stdio.h>
void display(int *a, int data, int size){
    int pos=0;
    for(int i=size;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=data;
}
int main(){
    int size,n;
    int arr[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        display(arr,arr[size-1],size);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
     }
    return 0;
}