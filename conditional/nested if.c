#include<stdio.h>
int main(){
char result;
float p;

printf("Enter result (p/f):");
scanf("%c",&result);
printf("Enter percentage value:");
scanf("%f",&p);

if(result=='p'){
    printf("Result: Pass\n");
    if(p>=80){
        printf("Division: Distinction");
    }else if(p>=60){
        printf("Division: First");
    }else if(p>=45){
        printf("Division: Second");
    }else{
        printf("Division: Third");
    }
}else{
    printf("Fail");
}
return 0;
}
