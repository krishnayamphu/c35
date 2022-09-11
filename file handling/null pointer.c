#include<stdio.h>
FILE *f;
int main(){
char ch;
f=fopen("book.txt","r");
if(f==NULL){
    printf("\nfile not found!");
}else{
    ch=getc(f);
    printf("%c",ch);
}
fclose(f);
return 0;
}

