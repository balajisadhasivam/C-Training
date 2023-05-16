#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int c=0;
    scanf("%d",&n);
    c = (n==0)?1:(int)log10(n)+1;
    printf("%d",c);
    return 0;
}