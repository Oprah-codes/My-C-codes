//Using functions to calculate area of a circle
#include<stdio.h>


float product(int radius){
    float pi=3.142;
    return pi*radius*radius;
}
int main(){
    int radius;
    float area;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    area=product(radius);
    printf("The area of the circle is %f\n",area);
    return 0;
}
