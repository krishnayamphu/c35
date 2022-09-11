#include<stdio.h>
FILE *f;
int main(){
char name[]="Hari";
int age=20;

f=fopen("persons.txt","w");
fprintf(f,"%s\t%d\n",name,age);
printf("Data write successfully.");
fclose(f);
return 0;
}

