#include<stdio.h>
int main(){
    float rate,principal,year;

    printf("Enter the rate:\n");
    scanf("%f",&rate);
    printf("Enter the year:\n");
    scanf("%f",&year);
    printf("Enter the principal:\n");
    scanf("%f",&principal);

    printf("The simple interest is %f\n",rate*year*principal/100);
    return 0;
}