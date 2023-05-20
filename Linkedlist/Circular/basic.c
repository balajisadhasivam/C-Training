#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}NODE;
NODE *start=NULL,*end=NULL;
void insert(int n){  //20
    NODE* newNode=(NODE*)malloc(sizeof(NODE));
    newNode->data=n;
    newNode->next=start;
    if(start==NULL){
        start=newNode;
        end=newNode;
    }
    else {
        end->next=newNode;
        end=newNode;
    }
}
void display(){
    NODE* tptr;
    for(tptr=start;tptr->next!=start;tptr=tptr->next){
        printf("%d ",tptr->data);
    }
    printf("%d",tptr->data);
}
int main()
{
    int n;
    while(1){
       scanf("%d",&n);
       if(n==-1)
       break;
       insert(n);
    }
    display();
}

