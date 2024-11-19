//Use of Structures in c programs

#include<stdio.h>
#include<string.h>

struct employee{
    char name[25],depertment[20],email[20];
    int id;
    float salary;
}employee1;
int main(){
    strcpy(employee1.name,"John Doe");
    employee1.id = 12345;
    strcpy(employee1.depertment,"Human Resourses");
    employee1.salary = 55000.50;
    strcpy(employee1.email,"john.doe@gmail.com");
    
    printf("\nThe name of the employee is %s",employee1.name);
    printf("\nThe ID of the employee is %d",employee1.id);
    printf("\nThe Depertment of the employee is %s",employee1.depertment);
    printf("\nThe Salary of the employee is %.2f",employee1.salary);
    printf("\nThe Email of the employee is %s",employee1.email);
    
    return 0;
    
}
