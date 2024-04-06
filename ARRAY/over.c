#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 10;
    int* a = (int *)malloc(sizeof(int) * n);
    printf("%ld\n",a);
    printf("%ld\n",a[10]);
    
    if(a == NULL){
      printf("no memory available");
      exit(1);
    }
    
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d", a + i);
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ", *(a + i));
    }
    return 0;
}