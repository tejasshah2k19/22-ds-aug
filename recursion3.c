#include<stdio.h>

void recursion_function(int n){
    if(n == 0 )
        return;
    printf("%d ",n);//5 4 3 2 1
    recursion_function(n-1);//4
}

int sum(int x){

    if(x == 0 )
        return 1;
    else
        return x+sum(x-1);//return 5+4+3+2+1+1
}
int main(){
    int ans;
    recursion_function(5);
    ans = sum(5);
    printf("\n ans = %d",ans);

    return 0;
}
