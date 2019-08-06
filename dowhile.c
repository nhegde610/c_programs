#include<stdio.h>
int main(){
    int num,i=0;
    printf("Enter the limit upto which numbers will be printed\n");
    printf("Enter the number:");
    scanf("%d",&num);
    do{
        i++;
        printf("%d\t",i);
    }while(i<num);    
    printf("\n");
    return 0;
}