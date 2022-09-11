#include<stdio.h>
FILE *f;
int main(){
char name[20];
int age;

f=fopen("persons.txt","r");
printf("Output:\n");
while(fscanf(f,"%s%d",&name,&age)!=EOF){
   printf("Name:%s\nAge:%d",name,age);
}
fclose(f);
return 0;
}

