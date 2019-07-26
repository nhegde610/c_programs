#include <stdio.h>
int ReverseRecursion(int number){
    int temp,reversedNum;
    if(number)
    {
        temp = number%10;
        reversedNum = reversedNum*10 + temp;
        ReverseRecursion(number/10);
    }  
    else 
        return 0;
    return reversedNum;
}
int main()
{
    int num,reversenum;
    printf("enter the number for reversal:");
    scanf("%d",&num);
    reversenum = ReverseRecursion(num);
    printf("The reversed number is : %d",reversenum);
    return 0;
}