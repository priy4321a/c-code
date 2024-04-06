#include<stdio.h>
int main(){
    int a[10],i;
    printf("enter the elements of array:\n");
    for(i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int zeroCount=0;
    int oneCount=0;
    for(i=0; i<10; i++){
        if(a[i]==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    printf("zeroCount=%d\n",zeroCount);
    printf("oneCount=%d\n",oneCount);
    for(i=0; i<zeroCount; i++){
        a[i]=0;
    }
    for(int j=i; j<10; j++){
        a[j]=1;
    }
    for(int k=0; k<10; k++){
        printf("%d ",a[k]);
    }
    return 0;
}