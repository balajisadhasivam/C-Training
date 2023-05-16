#include<stdio.h> 
#include<string.h>
int main(){
    char str[100];
    char str1[100]="world";
    scanf("%[^\n]",str);
    char w=strcpy(str1,str);
    // int len=strlen(str);
    // printf("\n%s",str);
    // printf("\n%d",len);
}