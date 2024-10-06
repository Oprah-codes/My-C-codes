// A while program to calculate the cube of a given number

#include<stdio.h>
int main (){
    int num,cube, count=0;
    printf("To calculate the cube in a number: ");
    scanf("%d",&num);
    while(count<5) {
    cube =(num*num*num);
    printf("The cube for number %d is %d ",num, cube);
    printf("\n");
    num++;
    count++;
}
return 0;

}
