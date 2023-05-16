#include<stdio.h>
int des(int *arr){
    for(int i=0;i<5-1;i++){
        if(arr[i]<arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int asc(int *arr){
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[]={10,20,30,55,67};
    if(asc(arr)||des(arr)){
        printf("Monotonic Array");
    }
    else{
        printf("Not a Monotonic Array");
    }
}