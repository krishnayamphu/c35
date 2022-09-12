#include<stdio.h>
struct Person{
char name[20];
int age;
};
FILE *f;
void createPerson(){
    struct Person p;
    char next='y';
    f=fopen("hr_list.txt","w");
    while(next=='Y'|| next=='y'){
        printf("Your name:");
        scanf("%s",&p.name);
        printf("Your age:");
        scanf("%u",&p.age);
        fwrite(&p,sizeof(p),1,f);
        printf("Data write successfully.\n\n");
        printf("\n\nAdd another record?(Y/N):");
        next=getche();

    }

}
int main(){
createPerson();
return 0;
}

