#include<stdio.h>
int main(){

int num[5]; //array declaration
int i;
//assign array value:
// arrav_var[index]=value;

num[0]=50;
num[1]=60;
num[2]=70;
num[3]=80;
num[4]=90;

printf("%d\n\n",num[0]);

for(i=0;i<5; i++){
    printf("%d\t",num[i]);
}




return 0;
}
