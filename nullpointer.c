#include<stdio.h>
int main(){
    int *ptr = (int *)NULL;
    
    printf("The value of null pointer is %p\n",ptr);
    //this line gives error since the pointer is a null pointer
    printf("The value referenced by null pointer is %d\n",*ptr);
    return 0;
}