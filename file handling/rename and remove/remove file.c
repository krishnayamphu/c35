#include<stdio.h>
int main(){
int status;
status=remove("doc.txt");
if(status==0){
   printf("file deleted. %d",status);
}else{
    printf("file can't delete. %d",status);
}
return 0;
}
