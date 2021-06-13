#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node {
  int data;
  struct node *prev, *next;
} *head;
void initialize(){
    head = NULL;
}
void insert(int num) {
    
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;

    newNode->next = head;
    newNode->prev = NULL;
    if(head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
    printf("Inserted Element : %d\n", num);
}
int getMaxNode(struct node *head){

    if(head == NULL){
        printf("Error : Invalid Input !!!!\n");
        return INT_MIN;
    }
    int max = head->data;
    while(head != NULL){
        if(head->data > max){
            max = head->data;
        }
        head = head->next;
    }
    return max;
}
void printLinkedList(struct node *nodePtr) {
    printf("Doubly Linked List\n");
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-><-");
  }
}
int main() {
    initialize();
  
    insert(4);  
    insert(9); 
    insert(12); 
    insert(1);
    
    printLinkedList(head);

    printf("\nMaximum Value in Linked List : %d", getMaxNode(head));
     
    return 0;
}
