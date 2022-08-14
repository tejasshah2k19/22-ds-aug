#include<stdio.h>
#define SIZE 5
//symbolic constant
int a[SIZE];

void getData();
void printData();

int main(){
    int choice,num,location;
    //c - 0 = false
    //- + => true
    while(-1){
        printf("\n0 for exit");
        printf("\n1 for Insert");
        printf("\n2 for List");
        printf("\n3 for Remove");
        printf("\nPlease Enter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                printf("\nEnter data and location");
                scanf("%d",&num);
                scanf("%d",&location);//1
                a[location-1] = num;
                break;
            case 2:
                printData();
                break;
            case 3:
                printf("\nEnter location?");
                scanf("%d",&location);
                a[location-1] = 0;
                break;
            default:
                printf("\nInvalid Choice PTA");
        }//switch

    }//while
    return 0;
}

void getData(){
    int i;//local variable
    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);
    }
}

void printData(){
    int i;
    printf("\nContent of An Array\n");
    for(i=0;i<SIZE;i++){
        printf(" %d",a[i]);
    }
}
