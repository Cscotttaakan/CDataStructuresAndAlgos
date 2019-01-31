#include<stdio.h>
#include<stdlib.h>
#include<binarysearch.h>

int main(){
    
    IntArray *array;

    array->size = 4;
    printf("%d is the size of the array \n",array->size);

    array->data = malloc(array->size * sizeof(int));
    int *ptr = array->data;
    *ptr = 4;
    printf("%d is the number at position 1", *(array->data));

    ptr++;
    *ptr = 5;


    ptr++;
    *ptr = 6;

    ptr++;
    *ptr = 7;


    int num = binsearch(7, array);
    printf("\n %d is the location of the number", num);
    



    return 0;
}
