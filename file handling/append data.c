#include<stdio.h>
FILE *f;
int main(){
f=fopen("append_data.txt","a");
putc('p',f);
printf("Data append successfully.");
fclose(f);
return 0;
}

