#include<stdio.h>
int comp(char a[] , char b[]){
    for(int i=0; i<strlen(a); i++){
        if(a[i]==b[i]) continue;
        return a[i]-b[i];
    }
}
int main(){
    char a[]="abc";
    char b[]="abc";
    printf("%d", comp(a,b));
    return 0;
}