#include<stdio.h>
int main(){
    float celsius,fahrenheit; 

    printf("Enter the temperature in celsius:\n");
    scanf("%f",&celsius);

    fahrenheit = (1.8*celsius) + 32.0;

    printf("The temperature in fahrenheit is %f\n",fahrenheit);
    return 0;
}