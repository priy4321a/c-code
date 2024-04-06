#include<stdio.h>
#define size 4
int arr[size];
int top=-1;
int top2=-1;
void push (int data){
    if(top==size-1){
        printf("stack overflow");
    }
    arr[++top]=data;
    printf("pushed element = %d\n",data);
}
void pop(){
int data=arr[top--];
printf("poped element = %d\n",data);
}  
int main(){
    push(4);
    push(3);
    push(2);
    push(1);
    pop();
    pop();
    pop();
    pop();
    return 0;
}