//CALCULATING THE SIMPLE INTREST

#include <stdio.h>
int main() {
    float principal_amount, rate , time , simple_interest;
    printf("To calculate the Simple intrest i will need the following:");
    printf("\n");
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal_amount);
    printf("\n");
    printf("Enter the Rate: ");
    scanf("%f",&rate);
    printf("\n");
    printf("Enter the Time in years: ");
    scanf("%f",&time);
    simple_interest= (principal_amount*rate*time)/100;
    printf("The Simple intrest is %.2f Ksh.\n",simple_interest);
    
    return 0;
}