#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include "Person.c"
FILE *f, *fp;
#include "Menu.c"
#include "ViewPersons.c"
#include "AddPerson.c"
#include "EditPerson.c"
#include "DeletePerson.c"
#include "Search.c"
int main(){
int choice;
    while(1){
        system("cls");
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            viewPersons();
            getch();
            break;
        case 2:
            addPerson();
            getch();
            break;
        case 3:
            editPerson();
            getch();
            break;
        case 4:
            deletePerson();
            getch();
            break;
        case 5:
            search();
            getch();
            break;
        case 6:
            printf("Press ANY KYY to continue.");
            exit(0);
            break;
        default:
            printf("Invalid choice number!");
            break;
        }
    }
return 0;
}

