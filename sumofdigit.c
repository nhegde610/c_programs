#include<stdio.h>
int main(){
    unsigned long int num;
    int sum=0,temp=0;
    printf("Enter the number to find the sum of its digit:");
    scanf("%lu",&num);

    while(num)
    {
        temp = num % 10;
        sum = sum + temp;
        num = num /10;
    }
    printf ("The sum of the digits is : %d\n",sum);
    return 0;
}