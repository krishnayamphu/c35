#include<stdio.h>
void test(char*);
int main(){
    test("Ram");
return 0;
}
void test(char *name){
 printf("Your name is: %s",name);
}
