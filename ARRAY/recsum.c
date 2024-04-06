// #include<stdio.h>
// int sum(int b){
//     if(b>0){
//         return b + sum(b-1);
//     }
//     return 0;
// }
// int main(){
//     int b=5;
//     printf("%d", sum(b));
// }

#include<stdio.h>
int fact(int b){
    if(b>0){
        return b * fact(b-1);
    }
    return 1;
}
int main(){
    int b=5;
    printf("Factorial is %d", fact(b));
}