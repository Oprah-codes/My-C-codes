//CALCULATING THE VOLUME AND SURFACE AREA OF A CYLINDER

#include <stdio.h>
#include <math.h>
int main() {
    float radius,height,volume,surface_area,pie= 3.142;
    printf("To calculate the Volume and Surface i will need the following:");
    printf("\n");
    printf("Enter the Radius of the cylinder: ");
    scanf("%f",&radius);
    printf("\n");
    printf("Enter the Height of the cylinder: ");
    scanf("%f",&height);
    volume= pie * pow(radius, 2) * height;
    surface_area= 2 * pie * pow(radius,2) + 2 * pie * radius * height;
    printf("\n");
    printf("The Volume is %.2f ",volume);
    printf("\n");
    printf("The Surface area is %.2f ",surface_area);
    
    return 0;
}
   