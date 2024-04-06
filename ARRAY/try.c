#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a=(int*)malloc(sizeof(int)*4);
    for(int i=0; i<5; i++){
    a[i]=i;
    }
    for(int i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    int n;
    printf("Enter The no. That U Want To Realloc:\n");
    scanf("%d",&n);
    int *b=(int*)realloc(a,sizeof(int)*n);
    for(int i=0; i<n; i++){
        a[i]=i;
    }
    printf("Realloc:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}