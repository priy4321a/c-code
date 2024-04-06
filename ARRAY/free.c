#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 3;
    int* a = (int *)malloc(sizeof(int) * n);
    printf("%ld\n", a);
    //  printf("%d\n", a[6]);
    // if(a == NULL){
    //   printf("no memory available");
    //   exit(1);
    // }
    
    // for(int i = 0 ; i < 10 ; i++){
    //     scanf("%d", a + i);
    // }
    // for(int i = 0 ; i < 10 ; i++){
    //     printf("%d ", a[i]);
    // }
    
    // int n = 3;
    // int *a = (int *)calloc(sizeof(int) , n);
    // printf("%ld\n", a);
    //  printf("%d\n", a[3]);
    // if(a == NULL){
    //   printf("no memory available");
    //   exit(1);
    // }
    
    
    
    
    for(int i = 0 ; i < n ; i++){
        a[i] = i;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    // realloc - n =3
    // int* a = (int *)malloc(sizeof(int) * n);
    int *ab = (int *) realloc(a, sizeof(int) *2);
    for(int i = 0 ; i < 2 ; i++){
        printf("%d ", ab[i]);
    }
    
    printf("%ld\n", a);
    printf("%ld\n", ab);
    
    
    free(a);
    free(ab);
    
   
    
    
   
    return 0;
}