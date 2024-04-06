#include<stdio.h>
int main(){
    int n,i,j,k, count=0; 
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Kth element:");
    scanf("%d",&k);
    for(i=0; i<n; i++){
        if(k==arr[i]){
        printf("index of that no.=%d",i);
        //count++;
        }
    }
   return 0;
}