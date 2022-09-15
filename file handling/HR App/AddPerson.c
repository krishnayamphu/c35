void addPerson(){
    Person p;
    char next='y';
    f=fopen("hr_list.txt","a+");
    while(next=='Y'|| next=='y'){
        printf("\nYour name:");
        scanf("%s",&p.name);
        printf("Your age:");
        scanf("%u",&p.age);
        fwrite(&p,sizeof(p),1,f);
        printf("Data write successfully.\n");
        printf("\nAdd another record?[Y/N]:");
        next=getche();
    }
    fclose(f);
}
