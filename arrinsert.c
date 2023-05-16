#include<stdio.h>
void display(int *a, int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int size,a[100],pos,d;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&pos,&d);
    for(int i=size;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=d;
    display(a,size+1);
}