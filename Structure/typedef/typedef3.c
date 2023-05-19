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
 void login(){
    char u[100],p[100];
    printf("Enter the User name: \n");
    scanf("%s",u);
    printf("Enter the password:\n");
    scanf("%s",p);
    int x=0;
    for(int i=0;i<ind;i++){
        if(strcmp(data[i].username,u)==0 && strcmp(data[i].password,p)==0){
            x=1;
            break;
        }        
    }
    if(x==1){
        printf("LogedIn\n");
        printf("user        pass      email\n");
        for(int i=0;i<2;i++){
            printf("%s      %s      %s\n",data[i].username,data[i].password,data[i].email);
        }
    }
    else{
        printf("Invalid User Name or Password\n");
    }
 }
int main(){
    int option;
    while(1){
        printf("1.login\n2.register\n3.exit");
        scanf("%d",&option);
        switch(option){
            case 1:
            login();
            break;
            case 2:
            signu();
            break;
            case 3:
            return 0;
            default :
            printf("plz enter correct option:\n");
        }
    }
}   