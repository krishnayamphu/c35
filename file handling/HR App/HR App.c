#include<stdio.h>
#include<conio.h>
#include "Person.c"
FILE *f, *fp;
#include "Menu.c"
#include "ViewPersons.c"
#include "AddPerson.c"

int main(){

    while(1){
            int choice;
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            viewPersons(); break;
        case 2:
            addPerson(); break;
        default:
            printf("Invalid choice number!");
            break;
        }
    }
return 0;
}

