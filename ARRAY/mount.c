#include<stdio.h>
int main(){
   // int n;
    int a[5]={5,9,3,6,1},i;
    // for(int i=0; i<5; i++){
    //     scanf("%d",&a[i]);
    // }
    for(i=0; i<5; i++){
        if(a[i]>0&&a[i]<4){
            if(a[i]>a[i+1] && a[i]>a[i-1]){
            }
        }
    }
    printf("%d is mountain\n",a[i]);
    return 0;
}