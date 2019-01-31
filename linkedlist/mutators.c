#include<stdio.h>
#include<stdlib.h>
#include<node.h>

//Leftward bias
void addNode(Node *left, Node *right){

    if(*(left->next) == NULL)
        left->next = right;
    else
        addNode(left-next, right);

    return;

}
