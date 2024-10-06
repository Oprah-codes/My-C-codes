// Program that that calculates fine for overdue library books
#include<stdio.h>
int main(){
    int bookID, yearreturn, yeardue, monthreturn, monthdue, dayreturn, daydue,overdue,fineamount;
    printf("Enter The ID of the book:");
    scanf("%d",&bookID);
    printf("Enter The Due day of the Book borrowed : ");
    scanf("%d",&daydue);
    printf("Enter The Due month of the Book borrowed : ");
    scanf("%d",&monthdue);
    printf("Enter The year due of the Book borrowed : ");
    scanf("%d",&yeardue);
    printf("Enter The return day of the Book borrowed : ");
    scanf("%d",&dayreturn);
    printf("Enter The return month of the Book borrowed : ");
    scanf("%d",&monthreturn);
    printf("Enter The return year of the Book borrowed : ");
    scanf("%d",&yearreturn);
    if (yearreturn==yeardue&&monthreturn==monthdue){
        overdue=dayreturn-daydue;
    }
    else if (yearreturn==yeardue&&monthreturn>monthdue){
        overdue=(30*(monthreturn-monthdue))+(dayreturn-daydue);
    }
    else (yearreturn>yeardue);{
        overdue=(365*(yearreturn-yeardue))+((30*(monthreturn-monthdue)))+(dayreturn-daydue);
    }
    if (overdue<0) {
        printf("No fine. The book is returned early.\n");
    }
    else if (overdue>=1&&overdue<=7){
        printf("Your fine is 20 shillings per day.\n");
        fineamount=(overdue*20);
    }
    else if (overdue>=8&&overdue<=14){
        printf("Your fine is 50 shillings per day.\n");
        fineamount=(overdue*50);
    }
    else if (overdue>=15){
        printf("Your fine is 100 shillings per day.\n");
        fineamount=(overdue*100);
    }
    printf("The book ID: %d\n",bookID);
    printf("The Due date: %d/%d/%d\n",daydue,monthdue,yeardue);
    printf("The Return date: %d/%d/%d\n",dayreturn,monthreturn,yearreturn);
    printf("The overdue days are %d\n",overdue);
    printf("Your total fine amount is %d Ksh\n",fineamount);
    
    return 0;
}
    