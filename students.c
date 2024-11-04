//creating files
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1,marks;
    char name[9];
    for(i=1;i<=5;i++){
        printf("Enter student name: ");
        scanf("%s",&name);
        
        printf("Enter student marks: ");
        scanf("%d",&marks);
            }
    FILE*fptr;
    fptr = fopen("C:\Windows\System32\cmd.exe","r");
    if(fptr==NULL){
        printf("Error opening file");
        exit(1);
        
    }
    fscanf(fptr,"%s%d",&name,&marks);
    printf("The Student %s has %d marks.",name,marks);
    fclose(fptr);
   return 0;         
}
