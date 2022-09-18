#include<stdio.h>
#define PI 3.14
int main(){
    #ifdef PI
    printf("PI macro is already defined.");
    #else
    printf("PI macro is not defined.");
    #endif // PI
return 0;
}
