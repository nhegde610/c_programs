#include<stdio.h>
void function(int a , int b);
int main(){
    void (*functionPointer)(int, int);

    functionPointer = function;
    functionPointer(2,3);
    function(4,5);

    return 0;
}
void function(int a, int b){
    printf("The passed numbers are %d and %d\n",a,b);
}