// A Do while program to calculate the cube of a given number

#include<stdio.h>
int main (){
    int num,cube, count=1;
    printf("To calculate the cube of five numbers, Enter a starting number: ");
    scanf("%d",&num);
    
    do {
    cube =(num*num*num);
    printf("The cube for number %d is %d ",num, cube);
    printf("\n");
    count++;
    num++;
    } while (count<6);
    
return 0;
}
