#include<stdio.h>
#include<string.h>
typedef union{
    char address[20];
    char city[20];
}Address;
typedef union{
    char name[20];
    Address address;
}Person;

int main(){
Person p;
strcpy(p.address.city,"ktm");
printf("Address: %s",p.address.city);
return 0;
}
