#include<stdio.h>
#include<stdlib.h>
int main(){
    int number,firstDigit,lastDigit;

    printf("Enter the number:\n");
    scanf("%d",&number);
    if(number > 10){
        lastDigit = number % 10;
    
        firstDigit = number;
        while(firstDigit >= 10){
            firstDigit = firstDigit/10;

        }

        printf("The sum is %d\n",firstDigit+lastDigit);
    }
    else
    {
        printf("the number is less than 10\n");
    }
    
    return 0;
}