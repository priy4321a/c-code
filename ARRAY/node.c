#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
struct Node one , two , three;
one.data=10;
one.next=&two;

two.data=11;
two.next=&three;
one.next=&two;

three.data=40;
three.next=NULL;
two.next=&three;

printf("%d\n",one.data);
//printf("%p\n",one.next);

printf("%d\n",two.data);
//printf("%p\n",two.next);

printf("%d\n",three.data);
//printf("%p\n",three.next);
return 0;
} 