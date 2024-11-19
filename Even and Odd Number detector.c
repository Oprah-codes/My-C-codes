//Checking if the number is odd or even

#include<stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if (num %2 ==0){
        printf("The number is an Even Number");
    }else
    printf("The number is an Odd number");
    return 0;
}

