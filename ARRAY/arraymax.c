#include<stdio.h>
int main(){
    int n;
    printf("Enter your array size");
    scanf("%d",&n);
    int arr[n];
    int max=-99999;
    printf("Enter Your Elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      if(arr[i]>max){
            max=arr[i];
      }
    }
    printf("The maximum no is %d",max);
    return 0;
}