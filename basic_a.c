#include<stdio.h>


int main(){
    int x[5];//4*5=>20 byte
    int a;//gcc->4   tc->2
    printf("\na => %d",sizeof(a));
    printf("\nint => %d",sizeof(int));

    //4 byte? -> RAM -> stack
    //   heap
}


//array ->  collection of same type of data
//-> memory allocation -> continue order...
//-> index , subscript ,-> start with 0 and end with size - 1

