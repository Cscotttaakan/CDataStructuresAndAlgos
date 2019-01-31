#include<stdio.h>
#include<stdlib.h>
#include<binarysearch.h>

int main(){
    
    IntArray *array;

    array->size = 100;
    printf("%d is the size of the array \n",array->size);

    array->data = malloc(array->size * sizeof(int));
    int *ptr = array->data;

    for(int i = 0; i < array->size; i++){
        ptr[i] = i;
    }

    int num = binsearch(7, array);
    printf("\n %d is the location of the number", num);
    



    return 0;
}
