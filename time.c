#include<stdio.h>
int main(){
    int h,m,s;
    scanf("%d %d %d",&h,&m,&s);
    if((h<=24) || (h>=0) || (m<=60) || (m>=0) || (s<=60) || (s>=0)){
        printf("%d:%d:%d is a valid time",h,m,s);
    }
    else{
        printf("%d:%d:%d is not a valid time",h,m,s);
    }
}