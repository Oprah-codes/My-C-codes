//creating files
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1,marks, l;
    char name[15];
    printf("Enter the limit of the number of students: ");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        printf("Enter student name: ");
        scanf("%s",&name);
        
        printf("Enter student marks: ");
        scanf("%d",&marks);
            }
    FILE*fptr;
    fptr = fopen("C:\Windows\System32\cmd.exe","w");
    if(fptr==NULL){
        printf("Error opening file");
        exit(1);
        
    }
    fscanf(fptr,"%s%d",&name,&marks);
    printf("The Student %s has %d marks.",name,marks);
    fclose(fptr);
   return 0;         
}
