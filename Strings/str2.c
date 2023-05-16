#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i;
    for(i=0;str[i];i++);
    //for(i=0;str[i]!='\0';i++);
    printf("%d",i);
    // for(int i=0;str[i]!='\0';i++){
    //     printf("%c",str[i]);
    // }
    //scanf("%s%n",str,&len);
    //printf("%d",len);
}