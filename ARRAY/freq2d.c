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
    
    // int b[row][col];
    // printf("Enter the elements of 2nd array:\n");
    // for(i=0; i<row; i++){
    //     for(j=0; j<col; j++){
    //         scanf("%d",&b[i][j]);
    //     }
    // }
    // for(i=0; i<row; i++){
    //     for(j=0; j<col; j++){
    //         printf("%d ",b[i][j]);
    //     }
    //     printf("\n");
    // }
    int count=0,e;
    printf("Enter the no. that u want to be counted:\n");
    scanf("%d",&e);
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(a[i][j]==e){
                count++;
            }
        }
    }
    printf("count of given no. is %d",count);
    return 0;
}