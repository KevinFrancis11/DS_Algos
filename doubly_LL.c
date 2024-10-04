#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head,*new,*temp;
void main(){
    char ch;
    do{
    new = (struct node*)malloc(sizeof(struct node));
    new->prev = NULL;
    printf("Enter data: ");
    scanf("%d", &new->data);
    new->next = NULL;

    if(head==NULL){
        head = new;
        temp = new;
    }
    else{
        temp->next = new;
        new->prev = temp;
        temp = temp->next; // or temp = new
    }
   printf("Do you want to continue: (y/n)");
   scanf(" %c", &ch);
}while(ch=='y');
temp = head;
while(temp!=NULL){
    printf("%d<->",temp->data);
    temp = temp->next;
    if(temp==NULL){
        printf("NULL");
    }
}
}