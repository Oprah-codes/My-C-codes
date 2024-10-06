// Grading system

#include <stdio.h>
int main() {
    int Math,Eng, Kisw,ave;
    printf("Enter marks for math: ");
    scanf("%d",&Math);
    printf("Enter marks for Eng: ");
    scanf("%d",&Eng);
    printf("Enter marks for Kisw: ");
    scanf("%d",&Kisw);
    ave=(Math+Eng+ Kisw)/3;
    if (ave>=70&& ave<=100){
        printf("Your mean Grade is an A");
    }
    else if (ave>=60&& ave<=69){
        printf("Your mean Grade is B");
    }
    else if (ave>=50&& ave<=59){
        printf("Your mean Grade is C");
    }
    else if (ave>=40&& ave<=49){
         printf("Your mean Grade is D");
    }
    else if (ave<=39){
        printf("Your mean Grade is E FAIL");
    }
    
    return 0;
}
