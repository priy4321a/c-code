#include<stdio.h>
int main(){
    int row;
    printf("Enter the no. of row:");
    scanf("%d",&row);
    int col;
    printf("Enter the no. of col:");
    scanf("%d",&col);
    int a[row][col];
    printf("Enter the elements of 1st array:\n");
    int i,j;
    for( i=0; i<row; i++){
        for( j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( i=0; i<row; i++){
        for( j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int zeroCount=0;
    int oneCount=0;
    for( i=0; i<row; i++){
        for( j=0; j<col; j++){
            if(a[i][j]==0){
             zeroCount++;   
            }
            else{
            oneCount++;
            }
        }
        //printf("\n");
    }
    printf("zeroCount=%d\n",zeroCount);
    printf("oneCount=%d\n",oneCount);
    return 0;
}