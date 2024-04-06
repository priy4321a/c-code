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
    int b[row][col];
    printf("Enter the elements of 2nd array:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of both array is:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
        return 0;
}