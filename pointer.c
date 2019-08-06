#include<stdio.h>
int main(){
    int var,*pointer;

    pointer = &var;

    printf("Enter the value:\n");
    scanf("%d",&var);

    printf("The address of the variable is %x\n",pointer);
    printf("The value of the variable is %d\n",var);
    printf("The value of the variable incremented by pointer is %d\n", ++(*pointer));

    printf("The value of variable is %d now\n",var);
    return 0;
}