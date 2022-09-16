#include<stdio.h>
#define SIZE 500

int a[SIZE];//a[0] a[1] a[2] a[3] a[4]
int n;//5

void getData(){
    int i;
    for(i=0;i<n;i++){

        printf("\nEnter value");
        scanf("%d",&a[i]);
    }

}
void printData(){
    int i;
    printf("\nElements in array");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);

    }
}
int main(){

    printf("\nHow many elements you want?");
    scanf("%d",&n);
    getData();
    printData();



    return 0;
}
