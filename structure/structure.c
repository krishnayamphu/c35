#include<stdio.h>
#include<string.h>
struct Person{
char name[20];
int age;
};
int main(){
    struct Person p, p1;
    p.age=20;
    strcpy(p.name,"Ram");
    p1.age=22;
    strcpy(p1.name,"Sita");

    printf("Person's Name: %s",p.name);
    printf("\nPerson's Age: %d",p.age);
    printf("\n\nPerson's Name: %s",p1.name);
    printf("\nPerson's Age: %d",p1.age);

return 0;
}
