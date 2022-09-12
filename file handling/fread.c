#include<stdio.h>
struct Person{
char name[20];
int age;
};
FILE *f;
int main(){
struct Person p;
int status;
f=fopen("person_list.txt","r");
while(fread(&p,sizeof(p),1,f))
printf("Name:%s",p.name);
printf("\nAge:%d",p.age);
fclose(f);
return 0;
}

