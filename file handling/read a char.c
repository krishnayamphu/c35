#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("test.txt","r");
while((ch=getc(f))!=EOF){
    printf("%c",ch);
}

fclose(f);
return 0;
}
