#include<stdio.h>
int main(){
    int year=0;

    printf("Enter the year:\n");
    scanf("%d",&year);

    if( year%4 == 0 && ((year % 100 != 0) && (year % 4 !=0)))
        printf("The year is a leap year\n");
    else
        printf("the year is not a leap year\n");
    
    return 0;
}