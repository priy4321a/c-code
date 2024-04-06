#include<stdio.h>
int main(){
    int a[10];
    printf("enter the elements of array:");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    // int b[0];
    // printf("enter the no. u want to count:");
    // scanf("%d",&b[0]);
    for(int i=0; i<10; i++){
        if(a[i]==2){
        count++;
        }
    }
    printf("the no. of digits is %d",count);
    return 0;
}