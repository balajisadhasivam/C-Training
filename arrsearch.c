#include<stdio.h>
int main(){
    int size,a[100],key;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<size;i++){
        if(key==a[i]){
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");

}