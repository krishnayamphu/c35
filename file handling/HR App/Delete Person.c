#include<stdio.h>
#include<string.h>
struct Person{
char name[20];
int age;
};
FILE *f,*fp;
void createPerson(){
    struct Person p;
    char name[20];

    f=fopen("hr_list.txt","r");
    fp=fopen("temp.txt","w");

    printf("Enter delete name:");
    scanf("%s",&name);
    while(fread(&p,sizeof(p),1,f))
        {
            if(strcmpi(name,p.name)!=0){
             fwrite(&p,sizeof(p),1,fp);
            }
    }
    fclose(f);
    fclose(fp);
    remove("hr_list.txt");
    rename("temp.txt","hr_list.txt");
    printf("Data deleted successfully.");
}
int main(){
createPerson();
return 0;
}

