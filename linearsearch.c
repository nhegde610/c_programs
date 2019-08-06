#include<stdio.h>
int main(){
    int arr[50],count,i=0,key;
    printf("Enter number of elements:\n");
    scanf("%d",&count);
    printf("Enter the elements\n");

    while(i != count){
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Enter the element to search for:\n");
    scanf("%d",&key);

    for(i=0;i<count;i++){
        if(arr[i]== key){
            printf("\nFound!\n");
            printf("The element is at %d\n",i+1);
            return 0;
        }
    }
    printf("The element is not found!\n");
    return 0;
}