#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push(){
    int num;
    if(top == SIZE - 1 ){
        printf("\nStackOverFLow");
    }else{
        printf("\nEnter number");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}
void pop(){
    int num;
    if(top == -1)
        printf("\nStackUnderflow");
    else{
        num = stack[top];
        printf("\n%d pop",num);
        top--;
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}

void peep(){
    int location,index;
    printf("\nEnter location");
    scanf("%d",&location);
    index = top - location + 1;
    if(index < 0 ){
        printf("\nInvalid Location");
    }else{
        printf("\n%d",stack[index]);
    }
}
int main(){

    int choice;

    while(1){
        printf("\n\n0 for exit\n1 for PUSH\n2 for POP\n3 For Display\n4 for PEEP\nEnter choice");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break;

        }
    }
    return 0;

}
