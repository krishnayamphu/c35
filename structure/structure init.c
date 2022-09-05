#include<stdio.h>
struct Person{
char name[20];
int age;
};
int main(){
    struct Person p={"Hari",20};

    printf("Person's Name: %s",p.name);
    printf("\nPerson's Age: %d",p.age);

return 0;
}
