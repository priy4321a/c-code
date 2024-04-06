#include<stdio.h>
int main(){
    int a[8];
    printf("enter the elements of array:\n");
    for(int i=0; i<8; i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    // int b[0];
    // printf("enter the no. that u want to be counted:");
    // scanf("%d",&b[0]);
    // for(int i=0; i<8; i++){
    //     if(a[i]==b[0]){
    //         count++;
    //     }
    // }
    // printf("count of given no. is %d",count);
    
    return 0;
}