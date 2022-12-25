#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char username[20];
    char password[10];
    int n=1;
    do{
    printf("Enter the username:\n");
    scanf("%s",&username);
    printf("Enter the password:\n");
    scanf("%s",&password);
    if(strcmp(username,"abcd")==0) 
    {
        if(strcmp(password,"56478")==0)
         {
            printf("Login succesful........\n");
            break;
        }
    }
    else
     {
        printf("Invalid password\n");
        n++;
    }

    if(n>3){
        printf("acess denied\n");
        exit(0);
    }
    }while(n<=3);
}
    
