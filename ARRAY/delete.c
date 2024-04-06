#include<stdio.h>
int main(){
    int a[5];
    int ind;
    printf("enter the elements of array:\n");
    for(int i=0; i<5; i++){
    scanf("%d",&a[i]);
    }
    printf("enter the index no. you want to be deleted:");
    scanf("%d",&ind);
    for(int i=ind; i<5; i++){
        a[i] = a[i+1];
    }
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    return 0;
}