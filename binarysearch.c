#include<stdio.h>
int main(){
    int mid,low,high,arr[50],count,i=0,j,key;

    printf("enter the number of elements:\n");
    scanf("%d",&count);
    printf("Enter the elements:\n");
    while(i != count){
        scanf("%d",&arr[i]);
        i++;
    }
    printf("Enter the number to search:\n");
    scanf("%d",&key);
    low=0;
    high=count-1;
    while(low <= high){
        mid = (low+high)/2;
        if(key == arr[mid]){
            printf("The element is at %d\n",mid+1);
            return 0;
        }
        else if ( key < arr[mid])
            high = mid - 1;
        
        else if (key > arr[mid])
            low = mid + 1;

    }

    printf("The element doesn't exist\n");

    return 0;
}