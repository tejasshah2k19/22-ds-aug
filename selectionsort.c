#include<stdio.h>
#define S 5
int main(){

    int min,i,j,tmp;
    int a[] = {5,3,6,2,8};


    for(i=0;i<S;i++){
        min = i ;//a[0]
        for(j=i+1;j<S;j++){
            if(a[j] < a[min]  ){
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }

    printf("\nArray\n");
    for(i=0;i<S;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
