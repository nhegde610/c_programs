#include<stdio.h>
int main(){
    int num,i=0;
    printf("Enter the number to print numbers from 1 to the limit\n");
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<num){
        i++;
        printf("%d\t",i);        
    }
    printf("\n");
    return 0;
}