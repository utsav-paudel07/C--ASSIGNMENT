#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number");
    scanf("%d",&N);

    if (N>0)
    {
        printf("It's positive number:\n", N);
    }
    else 
    {
        printf("It's negative number:\n", N);
    }
    return 0;

}