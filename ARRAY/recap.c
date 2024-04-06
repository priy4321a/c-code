// #include<stdio.h>
// int main(){
//     int a[2][2],i,j;
//     printf("Enter The Elements Of 1st Array:");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
//     int b[2][2];
//     printf("Enter The Elements Of 2nd Array:");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             printf("%d",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The Sum Of Both Arrays Are:\n");
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             printf("%d",a[i][j]+b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     printf("enter the elements of array:");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//         scanf("%d",&a[i][j]);
//         }
//     }
//     int count=0;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//         if(a[i][j]==2){
//         count++;
//         }
//         }
//     }
//     printf("the no. of digits is %d",count);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     printf("Enter Your Elements:");
//     for(int i=0; i<3; i++){
//         for(j=0; j<3; j++){
//         scanf("%d",&a[i][j]);
//     }
//     }
//     for(int i=0; i<5; i++){
//         for(j=0; j<3; j++){
//         if(a[i][j]==0){
//             printf("%d is index of 0\n",i,j);
//             break;
//         }
//         if(a[i][j]==1){
//             printf("%d is index of 1\n",i,j);
//         }
//         } 
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5],i,zerocount = 0,onecount = 0;
//     printf("enter the elements of array:");
//     for(i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]==0){
//             zerocount++;
//         }
//         else if(arr[i]==1){
//             onecount++;
//         }
//         else{
//             printf("invalid input\n");
//             i--;
//         }
//     }
//     printf("zerocount=%d\n",zerocount);
//     printf("onecount=%d",onecount);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[2][2],i,j;
//     printf("enter the elemnts of 1st array:\n");
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }

//     int b[2][2];
//     printf("enter the elemnts of 2nd array:\n");
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             printf("%d",b[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//     if(a[i][j]==b[i][j]){
//         printf("matrix are equal\n");
//         break;
//     }
//     else{
//         printf("matrix are unequal\n");
//         break;
//     }
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[10];
//     printf("enter the elements of array:\n");
//     for(int i=0; i<10; i++){
//         scanf("%d",&a[i]);
//     }
//     int evenCount=0;
//     int oddCount=0;
//     for(int i=0; i<10; i++){
//         if(a[i]%2==0){
//             evenCount++;
//         }
//         else{
//             oddCount++;
//         }
//     }
//     printf("evenCount=%d\n",evenCount);
//     printf("oddCount=%d\n",oddCount);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[2][2],i,j;
//     printf("enter the elements of array");
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
//             printf("%d",&arr[i][j]);
//         }
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<2; j++){
            
//         }
//     }
// }