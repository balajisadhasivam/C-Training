#include<stdio.h>
typedef struct box
{
    int n;
    char ch;
}s;
int main(){
    s b1,b2;
    b1.n=10;
    b1.ch='a';
    printf("%ld",b1.n);
} 
