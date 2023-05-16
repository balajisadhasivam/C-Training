#include <stdio.h>
#include <string.h>
char* strreverse(char* str){
    int len;
    char str1[100];
    for (len=0;str[len];len++);
    int j=0;
    for(int i=len-1;i>=0;i--)
    {
		str1[j++]=str[i];
	}
    str1[len]='\0';
    strcpy(str,str1);
    return str;
}
int main()  
{
	char s[100];
    char s1[100];
    scanf("%s", s);
    strcpy(s1,strreverse(s));
    printf("%s",s1);
    return 0;
} 
