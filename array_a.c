#include<stdio.h>
#define SIZE 5
int a[SIZE];// 0 -> extern
int main(){
    int choice; // gv - auto class
    int  num,location,i;


    while(1){
        printf("\n0 for exit\n1 for insert\n2 for delete\n3 for list");
        printf("\nEnter choice..");
        scanf("%d",&choice);

        switch(choice){
            case 0:
                exit(0);
            case 1:
                printf("\nEnter num and location");
                scanf("%d%d",&num,&location);

                if(a[location-1]==0)
                    a[location-1]=num;
                else{
                        for(i=SIZE-1;i != location-1;i--){
                            a[i]=a[i-1];
                        }
                        a[i] = num;
                }
                break;
            case 2:
                break;
            case 3:
                for(i=0;i<SIZE;i++){
                    printf("  %d",a[i]);
                }
                break;
            default:
                printf("\nInvalid choice Try Again!!!");
        }
    }
    return 0;
}
