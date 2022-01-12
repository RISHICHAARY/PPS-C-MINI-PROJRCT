#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Bookcut=0,Borrcut=0;
struct Books{
    char Bookid[10];
    char Bookname[25];
};
struct Books Book[10000];
struct Borrowers{
    char Name[25];
    char Bookid[10];
    char Bookname[25];
    char Borroweddate[15];
    char Duedate[15];
};
struct Borrowers Borrower[10000];
int addbook(int i)
{
    printf("\n\nEnter Book ID: ");
    scanf("%s",Book[i].Bookid);
    printf("Enter Book Name: ");
    scanf("%s",Book[i].Bookname);
    printf("\n\tSUCCESSFULLY ADDED\n\n");
    return 0;
}
int addborrower(int i){
    printf("\n\nEnter Name: ");
    scanf("%s",Borrower[i].Name);
    printf("Enter Book ID: ");
    scanf("%s",Borrower[i].Bookid);
    printf("Enter Book Name: ");
    scanf("%s",Borrower[i].Bookname);
    printf("Enter Borrowed Date: ");
    scanf("%s",Borrower[i].Borroweddate);
    printf("Enter Due Date: ");
    scanf("%s",Borrower[i].Duedate);
    printf("\n\tSUCCESSFULLY ADDED\n\n");
    return 0;
}
int Verify(int i){
    int j,v=0;
    char vef[25];
    printf("\n\nEnter Book Name To Be Verified: ");
    scanf("%s",vef);
    for(j=0;j<i;j++){
            if(strcmp(vef,Borrower[j].Bookname)==0){
                    v=v+1;
                    printf("\n\tBook Taken\n\n");
            }
    }
    if(v==0){printf("\n\tBook Available\n\n");}
    return 0;
}
int dispbooks(int i){
    int j;
    for(j=0;j<i;j++){
        printf("\n\n%s             %s",Book[j].Bookid,Book[j].Bookname);
    }
    printf("\n\n");
    return 0;
}
int dispbr(int i){
    int j;
    for(j=0;j<i;j++){
        printf("\n\n%s         %s        %s         %s              %s",Borrower[j].Name,Borrower[j].Bookid,Borrower[j].Bookname,Borrower[j].Borroweddate,Borrower[j].Duedate);
    }
    printf("\n\n");
    return 0;
}
int main()
{
    int index;
    printf("\tWELCOME TO LIBRARY MANAGEMENT SYSTEM");
    printf("\n\nINDEX        OPTION");
    printf("\n\n  1          Add Book");
    printf("\n  2    Availability Verification");
    printf("\n  3        Add Borrower");
    printf("\n  4         View Books");
    printf("\n  5        View Borrower");
    printf("\n  6           Quit");
    printf("\n\nEnter Option Index To proceed: ");
    scanf("%d",&index);
    switch (index){
        case 1:
            printf("\n\tWELCOME TO ADD BOOK");
            addbook(Bookcut);
            Bookcut=Bookcut+1;
            main();
            break;
        case 2:
            printf("\n\tWELCOME TO AVAILABILITY VERIFICATION");
            Verify(Borrcut);
            main();
            break;
        case 3:
            printf("\n\tWELCOME TO ADD BORROWER");
            addborrower(Borrcut);
            Borrcut=Borrcut+1;
            main();
            break;
        case 4:
            printf("\n\tBOOKS");
            dispbooks(Bookcut);
            main();
            break;
        case 5:
            printf("\n\tBORROWERS");
            dispbr(Borrcut);
            main();
            break;
        case 6:
            printf("\n\tTHANK YOU :)");
            break;
        default:
            printf("\nENTER VALID INDEX\n\n");
            main();
            break;
    }
    return 0;
}
