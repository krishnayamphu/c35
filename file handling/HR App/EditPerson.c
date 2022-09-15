#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
char name[20];
int age;
}Person;
FILE *f,*fp;

void updatePerson(){
    Person p;
    int count=0;
    int status;
    char name[20];
    printf("Enter update name:");
    scanf("%s",&name);
    f=fopen("hr_list.txt","r");
    fp=fopen("temp.txt","w");

    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            printf("Existing data found:");
            printf("\n-------------------\n");
            printf("Name: %s\n",p.name);
            printf("Age: %d\n",p.age);
            count++;
            break;
        }
    }
    if(count==0){
        printf("Data not found");
    }
    rewind(f);
    fflush(stdin);

    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            printf("\n-------------------\n");
            printf("Enter New Name:");
            scanf("%s",&p.name);
            printf("Enter New Age: ");
            scanf("%d",&p.age);
            fwrite(&p,sizeof(p),1,fp);
        }else{
            fwrite(&p,sizeof(p),1,fp);
        }
    }
    fclose(f);
    fclose(fp);
    remove("hr_list.txt");
    status=rename("temp.txt","hr_list.txt");
    if(status==0){
        printf("\n\nData updated");
    }else{
        printf("\n\nError in while updating data.");
    }
}

int main(){
    updatePerson();
return 0;
}

