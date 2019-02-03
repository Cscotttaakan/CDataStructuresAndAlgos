#include<stdio.h>
#include<stdlib.h>
#include<mutators.h>



Node *mallocNode(Node *node){
   node = malloc(sizeof(Node));
   node->next = NULL;

   return node;
}

//(Time complexity), (Space complexity)

//Leftward bias
//O(n), O(m) : m functions
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

//O(1)
Node *addNodeHead(Node *head, int load){

   Node *newHead = mallocNode(newHead);
   newHead->data = load;
   newHead->next = head;
    
   return newHead;
    
}

//O(n), O(m)
int size(Node *head){
    if(!head->next)
        return 1;
    else{
        return 1 + size(head->next);
    }
}
//O(n), O(m)
void insertNode(Node *head, int load, int index){
    if(index > 0 && head->next)
        insertNode(head->next, load, --index);
    else{
        Node *node = mallocNode(node);
        node->data = load;
        node->next = head->next;
        head->next = node;
    }
}

void deleteNode(Node *head, int index){
    if(index > 0 && head->next)
        deleteNode(head->next, --index);
    else{
        
    }
    
}


