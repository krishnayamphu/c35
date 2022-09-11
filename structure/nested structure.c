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
strcpy(p.name,"Ram");
p.dob.day=20;
p.dob.month=2;
p.dob.year=2000;

printf("Name: %s\n",p.name);
printf("Date of Birth (dd-mm-yy):%d-%d-%d\n",p.dob.day,p.dob.month,p.dob.year);

return 0;
}

