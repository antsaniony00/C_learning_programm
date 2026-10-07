#include <stdio.h>

int main() {
    int day,mm,yy;
    scanf("%d%d%d",&mm,&day,&yy);
    printf("date donnes:%d/%d/%d\n",mm,day,yy);
    printf("date format:%4d/%d/%d",yy,day,mm);

    return 0;

}