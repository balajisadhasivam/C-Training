//ArrayofStructure
#include<stdio.h>
typedef struct box{
    int n;
    char ch;
}box;
int main(){
    box b1[5];
    for(int i=0;i<5;i++){
        scanf("%d %c",&b1[i].n,&b1[i].ch);
    }
    for(int i=0;i<5;i++){
        printf("%d %c\n",b1[i].n,b1[i].ch); 
    }
}