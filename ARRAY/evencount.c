#include<stdio.h>
int main(){
    int a[10];
    printf("enter the elements of array:\n");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int evenCount=0;
    int oddCount=0;
    for(int i=0; i<10; i++){
        if(a[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    printf("evenCount=%d\n",evenCount);
    printf("oddCount=%d\n",oddCount);
    return 0;
}