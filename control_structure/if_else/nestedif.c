#include<stdio.h>
#include<string.h>
int main(){
    char username[10],password[10];
    int choice;
    printf("Username:");
    scanf("%s",&username);
    printf("Password:");
    scanf("%s",&password);
    if (strcmp(username,"B6525279")==0 && strcmp(password,"1234")==0){
        printf("Login Complete\n");
        //!nested if
        printf("Select choice (1-2):");
        scanf("%d",&choice);
        if (choice==1){
            printf("Withdraw\n");
        }
        else if(choice==2) {
            printf("Deposit\n");
        }
        else {
            printf("Logout\n");
        }
    }
    else{
        printf("Who are you???");    
    }
    
    return 0;
}