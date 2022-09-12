#include<stdio.h>
struct Person{
char name[20];
int age;
};
FILE *f;
int main(){
struct Person p={"Ram", 20};
int status;
f=fopen("person_list.txt","w");
status=fwrite(&p,sizeof(p),1,f);
printf("data write successfully. %d",status);
fclose(f);
return 0;
}

