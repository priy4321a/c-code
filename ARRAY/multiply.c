#include<stdio.h>
int main(){
    int arr[2][2],sum,i,j,k;
    printf("enter the elements of 1st array:");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int barr[2][2],i,j,k;
    printf("enter the elements of 2nd array:");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&barr[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum=0;
            for(int k=0; k<2; k++){
                sum=sum+(arr[i][k]*barr[k][j]);
                k[i][j]=sum;
         }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("3rd matrix is %d\n",sum);
        }
    }
    return 0;
}