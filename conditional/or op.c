#include<stdio.h>
int main(){
char username;

printf("Username:");
scanf("%c",&username);

if(username=='a'|| username=='A'){
    printf("Username found");
}else{
    printf("Username not found");
}

return 0;
}
