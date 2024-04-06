#include<stdio.h>
int main(){
    int a[8];
    printf("enter the elements of array:\n");
    for(int i=0; i<8; i++){
        scanf("%d",&a[i]);
    }
    printf("rev is: \n");
    for(int i=7; i >= 0; i--){
        printf("%d ",a[i]);
    } 
    return 0;
}