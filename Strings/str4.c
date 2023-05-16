#include <stdio.h>
int main()
{
    char str[100],ch;
    scanf("%s",str);
    int n=0,len;
    for(len=0;str[len];len++);
    for(int i=0;i<=len;i++){
        if(str[i]>='0'&&str[i]<='9'&&str[i]!='\0'){
            n=n*10+(str[i]-48);
            if(str[i-1]>='a'&&str[i-1]<='z')
            ch=str[i-1];
        }
        else{
           for(int j=0;j<n;j++){
              printf("%c",ch); 
           } 
           n=0;
        }
    }
    return 0;
}







