#include<stdio.h>
int main(){
int day;
printf("Enter day no.:");
scanf("%d",&day);
switch(day){
    case 1:
    printf("SUN");
    break;
    case 2:
    printf("MON");
    break;
    case 3:
    printf("TUE");
    break;
    case 4:
    printf("WED");
    break;
    case 5:
    printf("THU");
    break;
    case 6:
    printf("FRI");
    break;
    case 7:
    printf("SAT");
    break;
    default:
    printf("Invalid day no.");
    break;
}
return 0;
}
