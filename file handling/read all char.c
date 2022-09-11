#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("docs.txt","r");
printf("Ans:\n");
while((ch=getc(f))!=EOF){
   printf("%c",ch);
}

fclose(f);
return 0;
}
