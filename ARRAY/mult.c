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
    int i,j,k;
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
    int c[row][col];
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            c[i][j]=0;
            for(k=0; k<col; k++){
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
        printf("multiplication of both arrays:\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        } 
    
        return 0;
}