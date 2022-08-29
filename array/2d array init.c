#include<stdio.h>
int main(){
int i,j;
int n[2][2]={10,20,30,40};
                //or
            /*
            {{10,20},
             {30,40}};
             */


printf("%d",n[0][0]);
printf("\n===========\n");
for(i=0;i<2; i++){
    for(j=0;j<2; j++){
        printf("%d ",n[i][j]);
    }
    printf("\n");
}
return 0;
}
