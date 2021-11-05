#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
project:county library management system
Author:     stephen mungai
Date:       october 15
Compile:GNU GCC
Language:   C99
Licence:MIT
*/
int menu();
int main()
{
    int action;
    action = menu();
    return 0;
}

void execute_action(int action){
     printf("you selected action %d",action);
     }

int menu() // header/prototype
{
       int action;
    do {
        printf("\tCounty Library \n");
        printf("welcome  Mr.     Stephen.      \n");
        printf("what     would   you           like      to do?\n");
        printf("1.       View    Users.        \n");
        printf("2.       Add     new           User\n");
        printf("3.       Edit    User\n");
        printf("4.       Delete  User\n");
        printf("5.       Change  Password\n");
        printf("6.       Log     Out\n");
        printf("7.       Exit    System\n");
        printf("selected Action (1-7): ");
        scanf("%d",&action);
        if (action < 1 || action > 7) {
            system("cls");
            printf("Invalid action!!! Try again.\n");
        }
    } while ( action < 1 || action > 7);
    return action;
}
