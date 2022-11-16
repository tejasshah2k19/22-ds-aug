#include<stdio.h>

void add(int count){//5
    printf("\nHi");
    count++;//6

    if(count <=5){
        add(count);//5
    }
}


/*
int count=1;
void add(){//5
    printf("\nHi");
    count++;//6

    if(count <=5){
        add();//5
    }
}*/

/*
void add(){//5
    static int count=1;
    printf("\nHi");
    count++;//2

    if(count <=5){
        add();//5
    }
}
*/
int main(){

    add(1);

    return 0;
}
//infinite -> add() -> memory -> stack -> 200 mb*
