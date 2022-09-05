#include<stdio.h>
int main(){
int a=5;
int *p;
p=&a;
p=NULL;
if(p==NULL){
    printf("no any address ref.");
}else{
    printf("\nValue of p: %d",*p);
}


return 0;
}
