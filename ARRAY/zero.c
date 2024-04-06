#include<stdio.h>
int main(){
    int a[10];
    printf("enter the elements of array:\n");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int zeroCount=0;
    int oneCount=0;
    for(int i=0; i<10; i++){
        if(a[i]==0&&a[i]==1){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    printf("zeroCount=%d\n",zeroCount);
    printf("oneCount=%d\n",oneCount);
    return 0;
}