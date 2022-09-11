#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Person;

void personInfo(Person p);
int main(){
    Person p={"Ram", 20};
    //Person p1={"Hari", 22};
    personInfo(p);
    //personInfo(p1);
    Person person;
    printf("Name:");
    scanf("%s",&person.name);
    printf("Age:");
    scanf("%d",&person.age);
    personInfo(person);


return 0;
}

void personInfo(Person p){
    printf("Name: %s",p.name);
    printf("\nAge: %d\n\n",p.age);
}
