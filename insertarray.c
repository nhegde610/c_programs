#include<stdio.h>
int main(){
    int array[100],position=0,count=0,value,i=0;

    printf("Enter the number of elements:");
    scanf("%d",&count);
    printf("Enter the elements:\n");
    for(i=0;i<count;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the position of the elements:");
    scanf("%d",&position);

    printf("Enter the element:");
    scanf("%d",&value);

    for(i=count;i>=position-1;i--){
        array[count]=array[count-1];
    }
    array[position -1]= value;

    printf("Print the array\n");
    for(i=0;i<=count;i++){
        printf("%d\n",array[i]);
    }
    return 0;

}