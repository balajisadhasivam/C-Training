#include<stdio.h>
union box
{
    int n;
    char ch;
};
int main(){
    union box b1;
    b1.n=10;
    b1.ch='a';
    printf("%ld",b1.n);
}
