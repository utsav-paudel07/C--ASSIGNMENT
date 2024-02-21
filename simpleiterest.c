#include<stdio.h>
int main()
{
    int principal, Time, rate, Simple_Interest;
    printf("Enter principal value:\n");
    scanf("%d",&principal);
    printf("Enter Time period:\n");
    scanf("%d",&Time);
    printf("Enter Rate of interest:\n");
    scanf("%d",&rate);
     Simple_Interest= (principal*Time*rate)/100;
     printf("Simple Interest = %d\n", Simple_Interest);
}