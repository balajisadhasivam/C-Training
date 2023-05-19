#include<stdio.h>
#include<string.h>
typedef struct signup{
    char username[100];
    char password[100];
    char email[100];
}signup;
int ind=0;
signup data[100];
void signu(){
    char temp[100];
    printf("Enter the User name: \n");
    scanf("%s",data[ind].username);
    pass:
    printf("Enter the password:\n");
    scanf("%s",data[ind].password);
    printf("Enter the confirm password:\n");
    scanf("%s",temp);
    if(strcmp(data[ind].password,temp)!=0){
        printf("your password mismatched\n");
        goto pass;
    }
    printf("Enter the Email id:\n");
    scanf("%s",data[ind].email);
    printf("Done\n");
    ind++;
 }
int main(){
    for(int i=0;i<2;i++){
      signu();
    }
    printf("user        pass      email\n");
    for(int i=0;i<2;i++){
        printf("%s      %s      %s\n",data[i].username,data[i].password,data[i].email);
    }
}
