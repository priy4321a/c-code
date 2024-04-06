#include<stdio.h>
int main(){
    int V, E;
    printf("Please enter the no of vertices : ");
    scanf("%d", &V);

    printf("Please enter the no of edges : ");
    scanf("%d", &E);

    int graph[V+1][V+1];
    int a, b;
    for(int i = 1 ; i <= V ; i++){
        for(int j = 1 ; j <= V ; j++){
            graph[i][j] = 0;
        }
    }
    for(int i = 0 ; i < E ; i++){
        scanf("%d%d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    scanf("%d%d", &a, &b);
    printf("%d", graph[a][b]); // direct path

    
    scanf("%d%d", &a, &b);
    for(int i = 1 ; i < V ; i++){
        while(graph[a][i] != 1);
    }
    return 0;
}