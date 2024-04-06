#include<stdio.h>
int strlen(char names[]){
    int i;
    for(i=0; names[i] != '\0'; i++){
    }
    return i;
}
int main(){
    char name[20] = "Vishnu";
    printf("%d",strlen(name));
    return 0;
}