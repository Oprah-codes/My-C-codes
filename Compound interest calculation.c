//CALCULATING THE COMPOUND INTREST

#include <stdio.h>
#include <math.h>
int main() {
    float amount,principal_amount,rate ,time,compound_interest;
    int n;
    printf("To calculate the Compound interest i will need the following: ");
    printf("\n");
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal_amount);
    printf("\n");
    printf("Enter the annual interest rate: ");
    scanf("%f",&rate);
    printf("\n");
    printf("Enter the Time in years: ");
    scanf("%f",&time);
    printf("Enter the number of times the interest is compunded per year: ");
    scanf("%d",&n);
    amount= principal_amount * pow(( 1 + rate / n), n * time);
    printf("\n");
    compound_interest= amount - principal_amount;
    printf("The Compound Interest is %.2f Ksh.",compound_interest);
     
     return 0;
     
}