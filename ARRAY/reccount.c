#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    int s=n*fact(n-1);
    return 1;
}
    int main(){
        int n=3;
        fact(n);
        printf("%d",fact(n));
}