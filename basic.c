#include<stdio.h>

void main(){

    //tc -> 2 byte
    //gcc -> 4 byte

    int a,b,c;//2 byte?

    printf("\n %d ",sizeof(a));//4
    printf("\n %d ",sizeof(int));//4
    printf("\n %d ",sizeof(float));//4

    printf("\nEnter num");
    scanf("%d",&a);//address of a
    printf("\n%d",a);
    printf("\n%d",&a);//a => value
                    //&a => address of a

    //array ->
    //what ? why ? when ?
    //collection of same type of data , stored in continuous memory address
    //array int -> 1 2 33 45 66
    //access -> we can access array using index
    // index starts with 0 and ends with size-1


    //RAM -> stack
    int a[5]; // 5 integer value a[0] a[1] a[2] a[3] a[4]
              // 1st value -> 0th index a[0]
              // last -> 4th index a[4]
    //byte?
    //int4 byte --> 5*4 = 20 byte --> static
    //dynamic -->

    //disadvantage ?

}
