#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter Your Elements:");
    int max1=-9999;
    int min1=9999;
    int max2=-999;
    int min2=999;
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }
   else if(arr[i]>max2){
        max2=arr[i];
    }
    if(arr[i]<min1){
        min2=min1;
        min1=arr[i];
    }
    else if(arr[i]<min2){
        min2=arr[i];
    }
    }
    printf("firstmax is %d\n",max1);
    printf("firstmin is %d\n",min1);
    printf("secondmax is %d\n",max2);
    printf("secondmin is %d",min2);
    return 0;
}