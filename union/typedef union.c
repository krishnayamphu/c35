#include<stdio.h>
#include<string.h>
typedef union{
char name[20];
int age;
}Person;
int main(){
Person p;
p.age=20;
printf("Age: %d",p.age);

strcpy(p.name,"Ram");
printf("\nName: %s",p.name);
return 0;
}
