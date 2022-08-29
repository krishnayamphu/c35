#include<stdio.h>
void sum(int x, int y); //function declaration

int main(){
    sum(5,10);//function call
    sum(50,10);
    sum(100,20);
return 0;
}

void sum(int x, int y){ //function definition
    printf("Total sum: %d\n",(x+y));
}
