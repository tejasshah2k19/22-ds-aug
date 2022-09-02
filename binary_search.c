#include<stdio.h>
#define SIZE 5
//2 nos
// 10 nos
//15 nos


int main(){
    int a[SIZE],min,i,mid,max,search,found=0;//a[0] a[1]  a[2]  a[3] a[4]  => index - subscript => 0
    //array -> collection of same type of data type

    printf("\n Please Enter in Ascending Order....");
    for(i=0;i<SIZE;i++){
        printf("\nEnter number");
        scanf("%d",&a[i]);//a[0] a[1] 2 3 4
    }

    printf("\nEnter number search!");
    scanf("%d",&search);

    min = 0;
    max = SIZE - 1 ;

    while(max >= min){ //min > max
        mid = (min + max) / 2 ;

        if( a[mid] == search ){
            found = 1;
            break;
        }else if(search > a[mid] ){
            min = mid + 1;
        }else{
            max = mid - 1;
        }
    }

    if(found == 0)
        printf("\n%d not found",search);
    else
        printf("\n%d found",search);

    return 0;
}

//time complexity -> time take by your program for execution
//space complexity -> space-memory

