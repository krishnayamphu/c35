#include<stdio.h>
int main(){
char name[20];

start:
printf("Enter Name:");
scanf("%s",&name);
printf("Your name is: %s\n\n",name);
goto start;

}
