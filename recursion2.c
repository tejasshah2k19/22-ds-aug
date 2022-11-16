#include<stdio.h>

void add(int count){
    printf("\nHi");
    count++;
    if(count <= 5 ){
        add(count);
    }
    printf("\nbye");
}

int main(){

    add(1);
    sub();
    mul();
    printf("hi");
    return 0;

}
