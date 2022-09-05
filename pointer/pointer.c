#include<stdio.h>
int main(){
int a=5;
int *ip;

ip=&a;

printf("Address of a: %u",&a);
printf("\nAddress value of ip: %u",ip);

printf("\n\nValue of a: %d",a);
printf("\nvalue of ip: %d",*ip);

return 0;
}
