#include<stdio.h>
#include<string.h>
struct Dob{
    int day;
    int month;
    int year;
};
typedef struct{
    char name[20];
    struct Dob dob; //nested structure
}Person;

int main(){
Person p;
struct Dob dob;

printf("Size of p: %d\n",sizeof(p));
printf("Size of dob: %d",sizeof(dob));
return 0;
}

