#include<stdio.h>
int main(){
    int arr[10],i,j;
    printf("enter the elem of array:");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d",&arr[i]);
           if(arr[i]==arr[j]){
            printf("duplicate elements: ");
           } 
        }
    }
}

    // int arr[5],i,j,temp;
    // printf("enter the elem of array:");
    // for(i=0; i<5; i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(i=0; i<5; i++){
    //     for(j=i+1; j<5; j++){
    //         if(arr[i]>arr[j]){
    //             temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }
    // for(i=0; i<5; i++){
    //     printf("ascending order is %d\n",arr[i]);
    // }


//     int arr[5],i,j,temp;
//     printf("enter the elem of array:");
//     for(i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0; i<5; i++){
//         printf("descending order is %d\n",arr[i]);
//     }
    
//      return 0;
// }

//     int n,num,i;
//     printf("How many elemnts u want to enter:");
//     scanf("%d",&n);
//         int a[n];

//     for(i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter the elements u want to search:");
//     scanf("%d",&num);
//     for(i=0; i<n; i++){
//         if(a[i]==num){
//             printf("index of that no. is %d",num);
//             break;
//         }
//     }
//     return 0;
// }