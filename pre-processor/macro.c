#include<stdio.h>
#define POWR(n) n*n
#define CALC(a,b) ((a)>(b)?a:b)
int main(){

printf("%d",POWR(5));
printf("\n%d",POWR(10));
printf("\n%d is greater",CALC(10,50));

return 0;
}
