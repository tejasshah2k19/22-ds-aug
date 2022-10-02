#include<stdio.h>
#define S 4

int g[S][S];//0 0 0 0 0 0 0 0 0 0
int visited[S];//0 0 0 0


int main(){
    int i,j,currentVertex;
    int count=0,cost=0;
    for(i=0;i<S;i++){
        for(j=0;j<S;j++){
            if(g[i][j] == 0){
                printf("\n%d is Connected with %d\n",i,j);
                scanf("%d",&g[i][j]);//0 1 ? 1
                g[j][i] = g[i][j];
            }
        }
    }

    for(i=0;i<S;i++){
            printf("\n%d is connected with :\n ",i);
        for(j=0;j<S;j++){
            if(g[i][j] != -1)
                    printf(" %d ",j);
        }
    }

    printf("\nGraph Travel :-\n");

    currentVertex = 0 ;
    visited[currentVertex] = 1;
    count++;//1
    printf(" %d -> ",currentVertex);

    while(count<S){
        for(i=0;i<S;i++){//0   1
            if(g[currentVertex][i] != -1  && visited[i]  == 0 ){
                printf("%d -> ",i);
                visited[i] = 1;
                cost = cost + g[currentVertex][i];
                currentVertex = i;//2
                count++;
                break;
            }
        }
    }

    printf("\nTotal Cost => %d ",cost);
    return 0;
}
