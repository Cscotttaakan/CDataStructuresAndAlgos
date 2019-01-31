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


        ptr += midpoint;
        //ptr += midpoint * sizeof(int);   
        
        if( *ptr < num ) {
            lowerbound = midpoint + 1;
        }

        if( *ptr > num ) {
            upperbound = midpoint - 1;
        }

        if( *ptr == num ) {
            return midpoint;
        }
    }

    return -1;
}
