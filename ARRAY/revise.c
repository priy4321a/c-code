// #include<stdio.h>
//     void delete (int arr[]){
//         int k;
//         printf("enter index no. to delete:\n");
//         scanf("%d",&k);
//         for(int i=k; i<5; i++){
//             arr[i]=arr[i+1];
//         }
//         for(int i=0; i<5-1; i++){
//             printf("%d",arr[i]);
//         }
//     }
//     int main(){
//         int arr[5]={3,1,2,5,9};
//         delete (arr);
//         return 0;
//     }

// #include<stdio.h>
// int main(){
    // int arr[10]={9,8,4,0,0,2,7,0,6,0};
    // for(int i=0; i<10; i++){
    //     if(arr[i]==0){
    //         count++;
    //     }
    // }

//     int r,c,k;
//     printf("enter the rows & columns of matrix :\n");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter element arr[%d][%d]",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("the given matrix is -");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("enter the value of k");
//     scanf("%d",&k);
//     int max=arr[0][0],min=arr[0][0];
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(arr[i][j]>max){
//                 max=arr[i][j];
//             }
//             else{
//                 min=arr[i][j];
//             }
//         }
//     }
//     printf("max is %d & min is %d",max,min);
//     return 0;
// }

#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Given matrix is:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int rowsum,colsum;
    for(int i=0; i<3; i++){
        rowsum=0;
        for(int j=0; j<3; j++){
            rowsum += arr[i][j];
        }
        printf("sum of row %d = %d\n",i+1,rowsum);
    }
    for(int i=0; i<3; i++){
        colsum=0;
        for(int j=0; j<3; j++){
            colsum += arr[j][i];
        }
        printf("sum of column %d = %d\n",i+1,colsum);
    }
    return 0;
}