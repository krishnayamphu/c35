#include<stdio.h>
int main(){
FILE *f;
char ch;
f=fopen("docs.txt","w");
printf("Enter some text:");
while((ch=getchar())!='\n'){
    putc(ch,f);
}
printf("Data Write successfully.");

fclose(f);
return 0;
}
