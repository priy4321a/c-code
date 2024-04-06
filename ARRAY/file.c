#include<stdio.h>
int main(){
    int a;
    printf("Enter A Number:");
    scanf("%d",&a);
    // int sum=0;
    // for(int i=1; i<=a; i++){
    //     printf("%d\n",i);
    //     sum=sum+i;
    // }
    // printf("sum = %d",sum);

    for(int i=a; i>0; i--){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}