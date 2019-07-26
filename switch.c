#include<stdio.h>
int main(){
    int num;
    printf("enter the number between 1 and 9:");
    scanf("%d",&num);

    switch(num){
        case 1 : 
        case 2 :
        case 3 :printf("The number is less than 4\n");
                break;
        case 4 : printf("The number is 4\n");
                break;
        case 5 : 
        case 6 :
        case 7 :
        case 8 :
        case 9 : printf("The number is greater than 5\n");
                break;
        default : printf("please enter the correct number\n");
                break;
    }
    return 0;
}