#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char username[20];
char password[20];

printf("Username:");
scanf("%s",&username);
fflush(stdin);
printf("Password:");
scanf("%s",&password);

if(strcmp(username,"admin")==0 && strcmp(password,"a123")==0){
    printf("Welcome Admin");
}else{
    printf("Invalid username or password");
}
return 0;
}
