#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top=-1;

void push(int num);//insert
void pop();//remove
void display();//stack print
void peep(int location);

int main(){
    int choice,data,location;

    while(1){
        printf("\n0 For exit\n1 For PUSH\n2 For POP\n3 For Display\n4 For Peep\nEnter your choice");
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
            case 4:
                    printf("\nEnter location");
                    scanf("%d",&location);
                    peep(location);
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
    int num;
    if(top==-1)
        printf("\nStack is Empty");
    else{
        num=stack[top];
        printf("\n%d pop",num);
        top--;
    }
}
void display(){
    int i;
    //i > -1
    for(i=top; i>=0 ;i--){
      printf("\n%d",stack[i]);
    }
}

void peep(int location){
        int index;
        index = top - location + 1;
        printf("\n%d ",stack[index]);

}

