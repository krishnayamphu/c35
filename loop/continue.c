#include<stdio.h>
int main(){
int i,j;
for(i=1; i<=5; i++){
    if(i==3){
        continue;
    }
    printf("%d\n", i);
}
printf("\n==============\n");
for(j=1; j<=5; j++){
    if(j==2 || j==4){
        continue;
    }
    printf("%d\n",j);
}
}
