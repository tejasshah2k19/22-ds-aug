#include<stdio.h>
#define SIZE 5
//2 nos
// 10 nos
//15 nos


int main(){
    int a[SIZE],c=0,i,search,found=0;//a[0] a[1]  a[2]  a[3] a[4]  => index - subscript => 0
    //array -> collection of same type of data type

    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);//a[0] a[1] 2 3 4
    }
    /*
    for(i=0;i<SIZE;i++){
        c = c +  a[i];
    }
    printf("\nAdd = %d",c);
    */
    printf("\nEnter number search!");
    scanf("%d",&search);

    for(i=0;i<SIZE;i++){
        if(a[i] == search){
           found=1;
           break;
        }
    }
  //O(n)


    if(found == 0)
        printf("\n%d not found",search);
    else
        printf("\n%d found",search);

    return 0;
}

//time complexity -> time take by your program for execution
//space complexity -> space-memory

