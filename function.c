#include<stdio.h>

void add(); //declaration
//no return no argument

void sub(){
    int a,b,ans;
    printf("\nEnter two numbers ");
    scanf("%d%d",&a,&b);
    ans = a-b;
    printf("\nSubtraction = %d",ans);

}
void  mul(){
    int a,b,ans;
    printf("\nEnter two numbers ");
    scanf("%d%d",&a,&b);
    ans = a*b;
    printf("\nMultiplication = %d",ans);

}
int main(){
    int choice;

    while(1){
        printf("\n0 for exit\n1 For Add\n2 For Sub\n3 for Mul\nEnter your choice!!!");
        scanf("%d",&choice);//1 2 3

        switch(choice){
            case 0:
                printf("\nThank you!!!");
                exit(0);
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            default:
                printf("\nInvalid choice PTA");
        }
    }



    return 0;
}

void add(){

    int a,b,ans;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    ans = a+b;
    printf("\nAddition = %d",ans);

}
