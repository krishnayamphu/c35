#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Person;

int main(){
    Person p={"Ram", 20};

    printf("Name: %s",p.name);
    printf("\nAge: %d",p.age);



return 0;
}
