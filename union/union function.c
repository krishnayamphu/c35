#include<stdio.h>
#include<string.h>
typedef union{
char name[20];
int age;
}Person;
int getAge(Person p);
void getName(Person p);
int main(){
Person p;
p.age=40;
printf("Person age: %d",getAge(p));
strcpy(p.name,"Ram");
getName(p);
return 0;
}
int getAge(Person p){
   return p.age;
}
void getName(Person p){
    printf("\nPerson name: %s",p.name);
}
