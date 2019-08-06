#include<stdio.h>
#include<math.h>
int main(){
    float number;
    printf("Enter the number:");
    scanf("%f",&number);

    if(floor(number) == number)
        printf("The number is an integer\n");
    else
    {
        printf("The number is an float\n");
    }
    
    return 0;
    
}