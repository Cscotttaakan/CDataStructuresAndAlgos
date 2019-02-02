#include<stdio.h>
#include<stdlib.h>
#include<mutators.h>



Node *mallocNode(Node *node){
   node = malloc(sizeof(Node));
   node->next = NULL;

   return node;
}



//Leftward bias
void addNodeTail(Node *head, int load){

    if(!head->next){
        Node *tail = mallocNode(tail);
        tail->data = load;
        head->next = tail;
    }
    else
        addNodeTail(head->next, load);
    return;

}

Node *addNodeHead(Node *head, int load){

   Node *newHead = mallocNode(newHead);
   newHead->data = load;
   newHead->next = head;
    
   return newHead;
    
}


int size(Node *head){
    if(!head->next)
        return 1;
    else{
        return 1 + size(head->next);
    }
}


