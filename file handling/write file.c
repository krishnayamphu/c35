#include<stdio.h>
int main(){
FILE *f;
f=fopen("test.txt","w");
printf("file created successfully.");
fclose(f);
return 0;
}
