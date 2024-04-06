#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main() {
    
    int *a = (int)malloc(sizeof(int) * 3); // creates your 1d array of //pointer vars
    
    
    for(int i = 0; i < 3 ; i++){
        a[i] = (int*)malloc(sizeof(int) * 5);
    }
    
    a[0][0] = 5;
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            a[i][j] = i + j*4;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 3 ; i++){
        a[i] = (int*)realloc(a[i], sizeof(int) * 7);
    }
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            a[i][j] = i + j*4;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    a = (int*)realloc(a, sizeof(int) * 5);
    
     for(int i = 3; i < 5 ; i++){
        a[i] = (int*)realloc(a[i], sizeof(int) * 7);
    }
    
     for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            a[i][j] = i + j*4;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 5 ; i++){
        free(a[i]);
    }
    free(a);
}