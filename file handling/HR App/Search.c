void search(){
    Person p;
    int count=0;
    int status;
    char name[20];
    printf("Search name:");
    scanf("%s",&name);
    f=fopen("hr_list.txt","r");
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(p.name,name)==0){
            printf("Data found:");
            printf("\n-----------------------------\n");
            printf(" Name                    Age    ");
            printf("\n-----------------------------\n");
            printf(" %-23s %2d",p.name,p.age);
            count++;
            break;
        }
    }
    if(count==0){
        printf("Data not found");
    }
    fclose(f);
    fclose(fp);
}
