#include<stdio.h>
#define SIZE 5

int a[SIZE]; //a[0] a[1] a[2] a[3] a[4]
int index = 0 ;
void getData(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("Enter number");
        scanf("%d",&a[i]);
    }
}
void printData(){
    int i;
    for(i=0;i<SIZE;i++){
        printf("%d ",a[i]);
    }
}
void linearSearch(){
    int num ,i,found=0;//no
    printf("\nEnter number that you want to search!");
    scanf("%d",&num);
    for(i=0;i<SIZE;i++){
        if( a[i] == num){
            printf("\nNum Found");
            found=1;
            break;
        }
    }
    if(found == 0){
        printf("\nNum not found");
    }
}

void insert(){
    int num;
    if(index == SIZE){
        printf("\nArray Full");
    }else{
        printf("\nEnter number");
        scanf("%d",&num);
        a[index]  = num;
        index++;
    }
}

void deleteElement(){
    int num,i,found=0;
    printf("\nEnter number delete!");
    scanf("%d",&num);
    for(i=0;i<SIZE;i++){

        if(a[i] == num){
            found=1;
            a[i] = 0;
        }
    }

    if(found == 1)
        printf("\nNum removed");
    else
        printf("\nNum not present PTA");

}

void bubbleSort(){
    int j,tmp,i,swap=1;

    for(i=0;i<SIZE && swap == 1 ;i++){
        swap =0 ;
        printf("\nPass %d :\n",i+1);//PASS 1
        for(j=0;j<SIZE-1;j++){
            if(a[j] > a[j+1] ){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] =tmp;
                swap =1 ;
            }
        }
        //array
        printData();
        printf("\n");
    }

}


int main(){

    int choice;

    while(1){
        printf("\n0 for exit\n1 for insert\n2 for display\n3 for search");
        printf("\n4 for deleteElement");
        printf("\n5 for BubbleSort");
        printf("\nenter your choice!!");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                insert();
                break;
            case 2:
                printData();
                break;
            case 3:
                linearSearch();
                break;
            case 4:
                deleteElement();
                break;
            case 5:
                bubbleSort();
                printf("\nSorting done");
                break;
            default:
                printf("\nPlease Enter valid choice!!");
        }
    }
    return 0;
}
