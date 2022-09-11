#include<stdio.h>
#include<string.h>
typedef union{
char name[20];
int age;
}Person;
int main(){
Person p;
printf("size of person union: %d",sizeof(p));
return 0;
}
