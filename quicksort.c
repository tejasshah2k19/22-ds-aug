#include<stdio.h>
#define SIZE 5

int parition(int arr[],int l,int h){
    int pivot = arr[h];
    int j=l;
    int i=j-1; 

    for(;j<=h;j++){
        if(arr[j]<=pivot){
            i++;
            //swap i nd j 

        }
    }
    return i;

}
void quickSort(int arr[],int l,int h){

    if (l<h)
    {
    
        int partitionIndex = parition(arr,l,h);
        quickSort(arr,0,partitionIndex-1);
        quickSort(arr,partitionIndex+1,h);
    }

}

//6 15 28 14 32 71
//        
int main(){

    int arr[SIZE];
    //scan 
    quickSort(arr,0,SIZE-1);
    
    return 0;
}