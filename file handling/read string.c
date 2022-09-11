#include<stdio.h>
FILE *f;
int main(){
char data[20];
f=fopen("myfile.txt","r");
fgets(data,20,f);
printf("Output:\n%s",data);
fclose(f);
return 0;
}

