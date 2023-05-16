#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* arr=(int*)malloc(5*sizeof(int));
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arr=(int*)realloc(arr,sizeof(int)*7);
    arr[n]=5;
    arr[n+1]=19;
    for(int i=0;i<n+2;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}