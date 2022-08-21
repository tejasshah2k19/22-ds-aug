#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push(int num);//insert
void pop();//remove
void display();//stack print


int main(){
    int choice,data ;

    while(1){
        printf("\n0 For exit\n1 For PUSH\n2 For POP\n3 For Display\nEnter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                    exit(0);
            case 1:
                    printf("\nEnter value");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    display();
                    break;
        }
    }

    return 0;

}


void push(int num){
    if(top == SIZE - 1)
        printf("\nStack Is Full");
    else{
        top++;
        stack[top] = num;
    }
}
void pop(){

}
void display(){
    int i;
    //i > -1
    for(i=top; i>=0 ;i--){
      printf("\n%d",stack[i]);
    }
}

