#include<stdio.h>
struct Person{
char name[20];
int age;
};
FILE *f;
void createPerson(){
    struct Person p;
    f=fopen("hr_list.txt","r");
    while(fread(&p,sizeof(p),1,f))
        {
        printf("Name:%s\n",p.name);
        printf("Age:%d\n",p.age);
    }
}
int main(){
createPerson();
return 0;
}

