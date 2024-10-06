/* Area of a rectangle*/
#include<stdio.h>
int main(){
    int l,w,area;
    printf("  To find the area I need the length and width in meters  ");
    printf("\n");
    printf("\n");
    printf("    Enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("    Enter the width of the rectangle: ");
    scanf("%d",&w);
    area = l*w;
    printf("The Area of the rectangle is = %d meters sq",area);
    
    return 0;
}