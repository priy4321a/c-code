#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int *a=(int*)malloc(sizeof(int)*5);
    for(i=0; i<5; i++){
    a[i]=i;
    }
    for(i=0; i<5; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}