#include<stdio.h>
FILE *f;
int main(){
f=fopen("myfile.txt","w");
fputs("hello",f);
printf("data write successfully.");
fclose(f);
return 0;
}

