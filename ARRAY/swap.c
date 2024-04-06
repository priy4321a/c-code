#include<stdio.h>
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=5;
     int b=7;
     printf("%d and %d\n",a,b);
     swap(&a,&b);
     printf("%d and %d\n",a,b);

    int *p=&a; // int *p; p = &a;
    *p=7;
    //printf("%d\n",*p);
     *(&a)=17;
    printf("%d",*(&a));
     return 0;
}