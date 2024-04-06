#include<stdio.h>
int main(){
    int a[10];
    printf("enter the elements of array:\n");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int max=-999;
    int min=999;
    float sum=0;
    float avg=0;
    for(int i=0; i<10; i++){
        if(a[i] > max){
            max=a[i];
        }
        if(a[i] < min){
            min=a[i];
        }
        sum=sum+a[i];
        avg=sum/10;
    }
    printf("max is %d\n",max);
    printf("min is %d\n",min);
    printf("sum is %f\n",sum);
    printf("avg is %f\n",avg);
    return 0;
}