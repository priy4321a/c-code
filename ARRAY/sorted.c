#include<stdio.h>
int main(){
    int n;
    printf("enter your no.:");
    scanf("%d",&n);
    int temp;
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("Ascending is %d\n",arr[i]);
    }
    return 0;
}