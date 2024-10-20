//A function based program that that calculates fine for overdue library books within a month
#include<stdio.h>

int product(int daysOverdue,int fineamount){
    int Amount;
    Amount=daysOverdue*fineamount;
    return Amount;
}
int main(){
    int bookID,daydue,dayreturn,daysOverdue,fineamount,Amount;
    
    printf("Enter the ID of the book: ");
    scanf("%d",&bookID);
    
    printf("enter the due date of the book: ");
    scanf("%d",&daydue);
    
    printf("Enter the return Date of the book ");
    scanf("%d",&dayreturn);
    
    daysOverdue=(dayreturn-daydue);
    
    if (daysOverdue>15){
        fineamount=100;
    }else if (daysOverdue>7){
        fineamount=50;
    }else if(daysOverdue=0){
        fineamount=20;
    }
    printf("The book ID: %d\n",bookID);
    printf("The Due date: %d/\n",daydue);
    printf("The Return date: %d/\n",dayreturn);
    printf("The overdue days are %d\n",daysOverdue);
    printf("Your total fine amount is %d Ksh\n",fineamount); 
    return 0;
}
