#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *new, *head, *temp;
    head = 0; 
    temp = 0;
    char ch;
    do{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &new->data);
        new->next = NULL;
        if(head==NULL){
            head = new;
            temp = new;
        }
        else{
            temp->next = new;
            temp = temp->next;
        }
        printf("\nDo you want to continue: (y/n)");
        scanf(" %c",&ch);
    }while (ch=='y');
    temp = head;
    while(temp!=NULL){
        printf("%d->", temp->data);
        temp = temp->next;
        if(temp==NULL){
            printf("NULL");
        }
    }
    
}