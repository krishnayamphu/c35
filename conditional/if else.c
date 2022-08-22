#include<stdio.h>
int main(){
float math=6.5;
int a,b;
if(math>=35){
    printf("Pass");
}else{
    printf("Fail");
}

printf("\n\nEnter two number:");
scanf("%d%d",&a,&b);
if(a>b){
    printf("%d is greater",a);
}else{
    printf("%d is greater",b);
}
return 0;
}
