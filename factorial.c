#include<stdio.h>
unsigned long int factorial(unsigned long int fact);
int main(){
    unsigned long int number;
    printf("Enter the number to find the factorial\n");
    printf("Enter the number:");
    scanf("%lu",&number);

    number = factorial(number);

    printf("The number is %lu\n",number);

    return 0; 
}
unsigned long int factorial(unsigned long int fact){
    if(fact == 0)
        return 1;
    return fact * factorial(fact -1);
}