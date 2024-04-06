#include<stdio.h>
#define size 10
int arr[size];
int top=-1;
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
void peek(){
    int data=arr[top];
    printf("element on peek=%d\n",data);
}
void display(){
    int data=arr[top];
    for(int i=0; i<top; i++){
        printf("displayed element=%d\n",i);

    }
        printf("total displayed element=%d\n",data);

}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);

    peek();

    pop();
    pop();

    display();
    return 0;
}