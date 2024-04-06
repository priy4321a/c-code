#include<stdio.h>
int main(){
    int count=0,i;
    int arr[10]={1,0,5,0,6,0,3,7,5,0};
    printf("enter elem:");
    for(i=0; i<10; i++){
        if(arr[i]==0){
            count++;
        }
    }
        for(i=0; i<10; i++){
            if(arr[i]!=0){
                printf("%d  ",arr[i]);
            }
        }
    for(i=0; i<count; i++){
        printf("0  ");
    }
    return 0;
}





// #include<stdio.h>
// int main(){
    // int a[5],b;
    // printf("enter the elements of array:\n");
    // for(int i=0; i<5; i++){
    // scanf("%d",&a[i]);
    // }
    // printf("enter the index no. you want to be deleted:");
    // scanf("%d",&b);
    // for(int i=b; i<5; i++){
    //     a[i] = a[i+1];
    // }
    // for(int i=0; i<4; i++){
    //     printf("%d ",a[i]);
    // }


//     int arr[3][3],i,j;
//     printf("enter the elemnts of array:");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//         scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//         printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<3;i++){
//         int sum=0;
//         for(j=0; j<3; j++){
//             sum=sum+arr[i][j];
//         }
//         printf("sum of row %d=%d\n",i+1,sum);
//     }
//     for(i=0;i<3;i++){
//         int sum2=0;
//         for(j=0; j<3; j++){
//             sum2=sum2+arr[j][i];
//         }
//         printf("sum of column %d=%d\n",i+1,sum2);
//     }
//     return 0;
// }


// int n,i,j,temp;
// printf("enter the no. of elemnts:");
// scanf("%d",&n);
// int arr[n];
// printf("enter the elements of array:");
// for(i=0; i<n; i++){
//     scanf("%d",&arr[i]);
// }
// for(i=0; i<n; i++){
//     for(j=0; j<n; j++){
//         if(arr[i]<arr[j]){
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// for(i=0; i<n; i++){
//     printf("sorted array is:%d\n",arr[i]);
// }
// return 0;
// }