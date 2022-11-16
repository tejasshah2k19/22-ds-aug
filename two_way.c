#include<stdio.h>


void print(int arr[],int l,int size){
    int i;
    printf("\n******");
    for(i=l;i<=size;i++){
        printf(" %d ",arr[i]);
    }
}
//a=>10 20 30  b=>11 15 21
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l[n1],r[n2];

    for(i=0;i<n1;i++)
        l[i] = arr[left+i];
    for(j=0;j<n2;j++)
        r[j] = arr[mid+1+j];

    i=0,j=0,k=left;
    while( i < n1 && j < n2 )
    {
        if(l[i] < r[j]){
            arr[k++] = l[i++];
        }else{
            arr[k++] = r[j++];
        }

    }

    while(i < n1)
        arr[k++] = l[i++];

    while(j < n2)
        arr[k++] = r[j++];

}

void mergeSort(int arr[],int l,int r){ //0  9

    if(l < r ){

        int m =(l+r)/2; // 0+9 => 4.5 => 4 [ 0 1 2 3 4 ]
        mergeSort(arr,l,m);//0 1 2
        mergeSort(arr,m+1,r);//3 4 5
        merge(arr,l,m,r);
    }
}
//merge
int main(){

    int arr[] = {22,33,10,61,52,74,62,41,9,17};
    int s = sizeof(arr)/sizeof(int);

    printf("\nArray Before Sort\n");
    print(arr,0,s-1);

    printf("\nMERGE SORT STARTED \n");
    mergeSort(arr,0,s-1);//0 , 5
    //22    33      10      61      52      74         62       41      9    17


     printf("\nMERGE SORT END\n");
    printf("\nArray After Sort\n");
    print(arr,0,s-1);

    return 0;
}


