// A For program to calculate the cube of a given number

#include<stdio.h>
int main (){
    int num,cube, count=0;
    printf("To calculate the cube in a number: ");
    scanf("%d",&num);
    for(count = 0;count <5;count++) {
    cube =(num*num*num);
    printf("The cube for number %d is %d ",num, cube);
    printf("\n");
    num++;
}
return 0;

}
