#include<stdio.h>
int main(){
    int length,width;

    printf("Enter the length and width of a rectangle and square:\n");
    scanf("%d %d",&length,&width);

    if(length==width)
        printf("The area of the square is %d\n",length*width);
    else
        printf("The area of the rectangle is %d\n",length*width);
    
    return 0;
}