#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int num1,num2;

    printf("Enter the 2 numbers to be swaped\n");
    scanf("%d %d",&num1,&num2);

    swap(&num1,&num2);
    printf("the swaped numbers are %d and %d\n",num1,num2);
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b= temp;
}