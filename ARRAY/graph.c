#include <stdio.h>
void dfs( int arr[][100] ,int visit[100] ,int v , int i){
if (visit[i] == 1 ) {
    return ;
}
visit[i] = 1;
printf("%d",i);

for( int j = 1 ; j <= v ; j++){
if (arr[i][j] == 1  && visit[j] != 1){

dfs( arr, visit, v, j);
        }

    }

}

int main (){
    int v ;
    int e ;
    scanf("%d", &v);
    scanf ("%d" ,&e);
// printf("%d %d",v,e);

int arr[100][100] ;
for (int i =  1 ; i <= v ; i++){ 
    for (int j = 1 ; j <= v; j++){
    
     arr[i][j] = 0;

    }
}
int a, b;
printf("Enter edge between two vertex : ");
for (int i =  1 ; i <= e ; i++){ 
    
     
     scanf("%d%d", &a,&b);
     arr[a][b] = 1;
     arr[b][a] = 1;

}


for (int i =  1 ; i <= v ; i ++){ 
    for (int j = 1 ; j <= v; j++){
    
     printf("%d ",arr[i][j]);

    }
    printf("\n");
}
int visit[100];
for( int i = 1 ; i <= v ; i++){
    visit[i]=0 ;
}

dfs(arr, visit, v, 1);

    return 0;
}