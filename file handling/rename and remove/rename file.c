#include<stdio.h>
int main(){
int status;
status=rename("data.txt","doc.txt");
if(status==0){
   printf("file renamed successfully. %d",status);
}else{
    printf("filename can't rename. %d",status);
}
return 0;
}
