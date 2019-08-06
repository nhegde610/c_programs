#include<stdio.h>
int main(){
    int array[100],count,i,pos;

    printf("Enter the number of elements:");
    scanf("%d",&count);

    printf("Enter the arrays:\n");
    
    for(i=0;i<count;i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the position of the element to be deleted\n");
    scanf("%d",&pos);

    for(i=pos-1;i<count-1;i++){
            array[i]=array[i + 1];
    }

    printf("Enter the number:\n");
    for(i=0;i<count-1;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}