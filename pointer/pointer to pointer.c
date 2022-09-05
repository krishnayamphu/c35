#include<stdio.h>
int main(){
int a=5;
int *p, **ptr;

p=&a;
ptr=&p;

printf("Address of a: %u",&a);
printf("\nAddress value of p: %u",p);

printf("\n\nAdderss of p: %u",&p);
printf("\nAddress value of ptr: %u",ptr);

printf("\n\nValue of a: %d",a);
printf("\nValue of p: %d",*p);
printf("\nValue of ptr: %d",**ptr);



return 0;
}
