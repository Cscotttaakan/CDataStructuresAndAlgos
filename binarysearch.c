#include<stdio.h>
#include<intarray.h>

int binsearch(int num,  IntArray *array ) {

    int upperbound = array->size - 1;
    int lowerbound = 0;
    printf("\n %d This is the pointer value", *(array->data));
    
    while(1){

        if( upperbound < lowerbound )
            break;

        int midpoint = lowerbound + (upperbound - lowerbound)/2;
        int *ptr = array->data; 
        printf("\n %d is the midpoint \n", midpoint);

        printf("\n %p is the address of this pointer \n", ptr);

        ptr += midpoint;
        printf("\n This is the size of an int: %lu", sizeof(int));
        //ptr += midpoint * sizeof(int);   
        printf("\n This is the address after increment: %p", ptr);
        printf("\n This is the value after increment: %d", *ptr);
        
        if( *ptr < num ) {
            lowerbound = midpoint + 1;
        }

        if( *ptr > num ) {
            upperbound = midpoint - 1;
        }

        if( *ptr == num ) {
            return *ptr;
        }
    }

    return -1;
}
