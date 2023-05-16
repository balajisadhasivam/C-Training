#include<stdio.h> 
#include<string.h>
int main(){
    char str[100];
    char str1[100]="world";
    scanf("%[^\n]",str);
    int n=strcmp(str1,str);
    if(n==0){
        printf("Same");
    }
    else{
        printf("Not Same");
    }
}