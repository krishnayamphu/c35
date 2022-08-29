#include<stdio.h>
int getInterestRate(); //function declaration

int main(){
    printf("Interest rate: %d",getInterestRate()); //function call
return 0;
}

int getInterestRate(){ //function definition
    return 7;
}
