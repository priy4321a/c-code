#include<stdio.h>
int main(){
    int a[10];
    printf("enter the elements of array:\n");
    int sum=0;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int zeroCount=0;
    int oneCount=0;
    for(int i=0; i<10; i++){ 
      if(a[i]==0){
        zeroCount++;
      } 
      else if(a[i] % 2 == 0){
        printf("%d",a[i]*0);
        zeroCount++;
      }
      else if(a[i] % 2 != 0){
        printf("%d",a[i]*0+1);
        oneCount++;
      }
      sum=sum+i;
    }
    printf("\n");
    printf("array is %d\n",a[10]);
    printf("zeroCount=%d\n",zeroCount);
    printf("oneCount=%d\n",oneCount);
    printf("sum is %d\n",sum);
    return 0;
}