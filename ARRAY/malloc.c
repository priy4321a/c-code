#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
   // printf("Hello world");
   //malloc,calloc,realloc,free;
   int *a=(int*)malloc(sizeof(int)*5);
   for(int i=0;i<5;i++){
       a[i]=i;
   }
    for(int i=0;i<5;i++){
       printf("%d\n",a[i]);
   }
   int n;
   printf("enter the no. that u want to be realloc:\n");
   scanf("%d",&n);
   int *b=(int*)realloc(a,sizeof(int)*n);
   for(int i=0;i<n;i++){
       a[i]=i;
   }
   printf("realloc is:\n");
   for(int i=0;i<n;i++){
       printf("%d\n",a[i]);
   }
    return 0;
}