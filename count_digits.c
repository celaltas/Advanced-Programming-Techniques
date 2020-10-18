#include<stdio.h>

int main(){

    int number,quotient=1,count=0,divisor=10;
    printf("Enter the number:");
    scanf("%d",&number);

    if (number<0)
    {
       number=-number;
    }
    

    while (quotient>0)
    {
        quotient=number/divisor;
        divisor*=10;
        count++;

    }

    printf("Total number of digits: %d\n",(count));
    






    return 0;

}