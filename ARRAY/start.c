#include<stdio.h>
int main(){
    int arr[5],tarr[5],i,sum=0;
    printf("ENTER YOUR ELEMENTS:\n");
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    for(i=0; i<5; i++){
        sum=sum+arr[i];
    }
        printf("sum is %d",sum);
        
    return 0;
}