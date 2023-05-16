#include<stdio.h>
void display(int *a, int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int size,a[100],pos;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&pos);
    for(int i=pos;i<size-1;i++){
        a[i]=a[i+1];
    }
    display(a,size-1);
}