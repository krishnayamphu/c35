#include<stdio.h>
int main(){
int i,j,k,l;
int A[2][2]={1,2,3,4}, B[2][2]={5,6,7,8}, C[2][2];

printf("Adding two matrix:");
for(i=0;i<2; i++){
    for(j=0;j<2; j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}

printf("\nPrinting Result:\n");
for(k=0;k<2; k++){
    for(l=0;l<2; l++){
        printf("%d ",C[k][l]);
    }
    printf("\n");
}
return 0;
}
