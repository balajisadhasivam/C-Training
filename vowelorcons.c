#include <stdio.h>

int main()
{
    int c = 0;
    char s[100];
    printf("Enter the String:");
    scanf("%s", s);
    while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      printf("The given string is vowel");
      else{
        printf("The given string is cons");
    }
    break;
  }
  return 0;
}


