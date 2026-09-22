#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
        int data;
        struct node *next;

        };

int main(){
        struct node *head = NULL, *temp = NULL, *newnode = NULL, *newnode2 = NULL;

        int n,value;

        printf("Enter number of nodes:\n");
        scanf("%d",&n);

        for(int i=0; i<n; i++){
                newnode = (struct node*) malloc(sizeof(struct node));

                printf("Enter the value of data part:\n");
                scanf("%d",&value);
                newnode -> data = value;
                newnode -> next = NULL;

                if(head == NULL){
                        head = newnode;
                        temp = newnode;
                } else {
                        temp -> next = newnode;
                        temp = newnode;
                }
                /*struct node * new = NULL;
                printf("Enter new first\n");
                scanf("%d",new->data);
                new -> next = head;*/
        }
        newnode2 = (struct node*) malloc(sizeof(struct node));
        printf("Enter value to be inserted first:\n");
        scanf("%d", &newnode2->data);
        newnode2 -> next = head;
        head = newnode2;

        temp  = head;
        while (temp != NULL) {
                printf("%d -> ", temp->data);
                temp = temp -> next;
        }
        printf("NULL");
return 0;
}
