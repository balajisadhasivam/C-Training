#include<stdio.h>
#pragma pack(6)
struct box
{
    int n;
    char ch;
};
int main(){
    struct box b;
    printf("%ld",sizeof(b));
}
