#include<stdio.h>
#include<math.h>
int main(){
    int side1=0,side2=0,side3=0,perimeter=0,s=0;
    double area=0,num=0;

    printf("Enter the length of the sides of the triangle:\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    perimeter = side1+side2+side3;
    printf("The perimeter of the triangle is %d\n",perimeter);
    s =perimeter/2;
    num = (double)(s*(s-side1)*(s-side2)*(s-side3));
    area = (double)sqrt(num);

    printf("The area of the triangle is %f\n",area);

    return 0;
    
}