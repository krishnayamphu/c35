#include<stdio.h>
#define PI 3.14
#ifdef PI
#undef PI
#endif // PI

int main(){
    printf("PI: %f",PI);
return 0;
}
