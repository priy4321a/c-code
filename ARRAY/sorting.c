#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elem of array:");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
    printf("sorted array %d\n",a[i]);
   }
  return 0;
}