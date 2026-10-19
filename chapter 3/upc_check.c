#include <stdio.h>


/*
first digit : type of products
5 first digit : manufacturers
5 second digit : identifier of products
last digit : check digit

1st calcul (x) : ((1+3+7+9+11)*3)+y-1
2nd calcul (y) :2+4+6+8+10
*/

int main(void) {
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5;
    int first_sum,second_sum,total;

    printf("le premier nombre\n");
    scanf("%1d",&d);
    printf("le premier (groupe) nombre\n");
    scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
    printf("le second (groupe) nombre\n");
    scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);

    first_sum = d+i2+i4+j1+j3+j5;
    second_sum=i1+i3+i5+j2+j4;
    total = 3*first_sum+second_sum;

    printf("check upc:%d\n",9-((total-1)%10));



    return 0;
}