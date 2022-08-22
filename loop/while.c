#include<stdio.h>
int main(){
int i=1;
char ch;
while(i<=5){
    printf("%d\n",i);
    i++;
}
printf("\nEnter some text:");
while((ch=getchar())!='\n'){
    printf("%c",ch);
}

return 0;
}
