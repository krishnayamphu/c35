#include<stdio.h>
struct Person{
char name[20];
int age;
};
int main(){
    struct Person p[5];
    int i,j;
    for(i=0; i<5; i++){
        printf("Enter name:");
        scanf("%s",&p[i].name);
        printf("Enter Age:");
        scanf("%d",&p[i].age);
    }

    printf("\n\nAll persons list:\n");
    for(j=0; j<5; j++){
        printf("\nPerson's Name: %s",p[j].name);
        printf("\nPerson's Age: %d",p[j].age);
    }
return 0;
}
