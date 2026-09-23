#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node{
        int data;
        struct node* prev;
        struct node* next;
};

int main(){
        struct node *newnode = NULL, *head = NULL, *tail = NULL, *temp = NULL, *temp1 = NULL;
        int n, value;

        printf("Enter number of nodes:\n");
        scanf("%d",&n);

        for(int i=0; i<n; i++){
                newnode = (struct node*)malloc(sizeof(struct node));

                printf("Enter value of new node:\n");
                scanf("%d",&value);

                newnode -> data = value;
                newnode -> next = NULL;
                newnode -> prev = NULL;

                if(head == NULL){
                        head = tail = newnode;
                } else {
                        tail->next = newnode;
                        newnode->prev = tail;
                        tail = newnode;
                        }
                }
                temp1 = head;

                for(struct node *i= head; i!=NULL; i=i->next){
                        for(struct node *j=i->next; j!=NULL; j=j->next){
                                if(i->data > j->data){
                                        int temp = i->data;
                                        i->data = j->data;
                                        j->data = temp;
                                }
                        }
                }
                temp = head;
                while(temp != NULL){
                        printf("%d<->",temp->data);
                        temp = temp -> next;
                }
                printf("NULL\n");

}
