#include<stdio.h>
#include<stdlib.h>
#include<mutators.h>

int main(){
    Node head;
    head.data = 5;
    
    addNodeTail(&head, 3);
    printf("\n %d is the size of the linked list. \n", size(&head));

    return 1;
}