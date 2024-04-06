#include<stdio.h>
int main(){
   int V,E; 
   printf("Enter the no. of vertices:");
   scanf("%d",&V);
   printf("Enter the elements of edges:");
   scanf("%d",&E);

   int a,b;
   scanf("%d %d",&a,&b);
   int visited[a][b];
   
   int graph[V+1][V+1];
   for(int i=1; i<=V; i++){
    for(int j=1; j<=V; j++){
        graph[i][j]=0;
    }
   }
   for(int i=1; i<=E; i++){
    for(int j=1; j<=E; j++){
        if(visited[i][j]==1 && !visited[j]){
            graph[a][b]=1;
            graph[b][a]=1;
        }
    }
}
 
    for(int i=0; i<V; i++){
        printf("%d\n",visited[i]);
    }
   return 0;
}