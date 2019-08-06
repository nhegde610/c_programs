#include<stdio.h>
#include<math.h>
int main(){
    float area=0,circumference=0;
    float radius=0;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radius);

    circumference = 2*M_PI*radius;
    printf("The circumference is %f\n",circumference);

    area = M_PI * radius * radius;
    printf("The circumference is %f\n",area);

    return 0;
}