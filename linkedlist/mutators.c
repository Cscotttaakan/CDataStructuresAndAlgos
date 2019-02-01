#include<stdio.h>
#include<stdlib.h>
#include<mutators.h>

//Leftward bias
void addNodeTail(Node *head, int load){

    if(head->next == NULL){
        Node *tail = malloc(sizeof(Node));
        tail->data = load;
        head->next = tail;
    }
    else
        addNodeTail(head, load);
    return;

}

Node *addNodeHead(Node *head, int load){

   Node *newHead = malloc(sizeof(Node));
   newHead->data = load;
   newHead->next = head;
    
   return newHead;
    
}


int size(Node *head){
    if(head->next == NULL)
        return 1;
    else{
        return 1 + size(head);
    }
}


