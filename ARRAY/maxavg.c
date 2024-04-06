#include<stdio.h>
int main(){
    int arr[5],i,avg=0,sum=0;
    printf("Enter Your Elements:");
    int max=-9999,min=99999;
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
            sum=sum+arr[i];

    }

    
        avg=sum/5;
    
printf("The Max No. Is %d\n",max);
printf("The Min No. Is %d\n",min);
printf("sum Is %d\n",sum);
printf("Avg Is %d",avg);
return 0;
}