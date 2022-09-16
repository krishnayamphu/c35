void deletePerson(){
    Person p;
    char name[20];
    int count=0;

    f=fopen("hr_list.txt","r");
    fp=fopen("temp.txt","w");

    printf("Enter delete name:");
    scanf("%s",&name);
    while(fread(&p,sizeof(p),1,f))
        {
            if(strcmpi(name,p.name)==0){
                count++;
                continue;

            }else{
                fwrite(&p,sizeof(p),1,fp);
            }
    }
    fclose(f);
    fclose(fp);
    if(count>0){
        printf("\nData deleted successfully.");
    }else{
        printf("\nData not found!");
    }
    remove("hr_list.txt");
    rename("temp.txt","hr_list.txt");


}


