void viewPersons(){
    Person p;
    f=fopen("hr_list.txt","r");
    printf("-----------------------------------------------------------------\n");
    printf("---------------------- ALL PERSONS ------------------------------\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n-----------------------------\n");
    printf(" Name                    Age    ");
    printf("\n-----------------------------\n");
    while(fread(&p,sizeof(p),1,f)){
        printf(" %-23s %2d",p.name,p.age);
        printf("\n-----------------------------\n");
    }
    fclose(f);
}
