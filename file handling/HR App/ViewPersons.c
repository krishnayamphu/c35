void viewPersons(){
    Person p;
    f=fopen("hr_list.txt","r");
    printf("-----------------------------------------------------------------\n");
    printf("---------------------- ALL PERSONS ------------------------------\n");
    printf("-----------------------------------------------------------------\n");
    while(fread(&p,sizeof(p),1,f)){
        printf("Name:%s\n",p.name);
        printf("Age:%d\n",p.age);
    }
    fclose(f);
}
