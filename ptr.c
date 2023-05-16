#include<stdio.h>
int main(){
    int n=10;
    int* ptr;
    int ptr3[]={10,20,30,40};
    printf("%d\n",*(ptr3+1));
    ptr=&n;
    printf("%d\n",*ptr);
    int** ptr1;
    ptr1=&ptr;
    //printf("%p",*ptr1);
    printf("%d",**ptr1);
    return 0;
}