// A file program 
#include<stdio.h>
#include<stdlib.h>

int main(){
    char paragraph[200];
    printf("Write a paragraph ");
    scanf("%s",&paragraph);
    
    FILE*fptr;
    fptr=fopen("C:\\Users\\User\\Desktop\\my progs\\Output.txt","w");
    if (fptr==NULL){
        printf("Error opening file");
        exit(1);
    }
    fscanf(fptr,"%s",paragraph);
    fclose(fptr);
    return 0;
}
