#include<stdio.h>
void display(int *a, int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    display(a,n);
    return 0;
}