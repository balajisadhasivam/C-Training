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
    newNode->next=NULL;
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
    for(tptr=start;tptr!=NULL;tptr=tptr->next){
        printf("%d ",tptr->data);
    }
}
void delete(int d){
    NODE *tptr,*prev;
    for(tptr=start;tptr!=NULL&&tptr->data!=d;prev=tptr,tptr=tptr->next);
    if(tptr==start)
        start=start->next;
    else
    prev->next=tptr->next;
}
void findMid(){
    NODE* slow,*fast;
    for(slow=start,fast=start;fast->next!=NULL;slow=slow->next,fast=fast->next->next);
    printf("\nmid=%d",slow->data);
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
    // int data;
    // printf("Enter the data to delete:\n");
    // scanf("%d",&data);
    // delete(data);
    findMid();
    
}
















