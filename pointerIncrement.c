#include<stdio.h>
int main(){
    int var[]={100,30,40,50};
    int *pointer;
    pointer = var;

    while(*pointer != NULL){
        printf("the address is %x\n",pointer);
        printf("The Value is %d\n",*pointer);
        pointer++;
    }
    return 0;
}