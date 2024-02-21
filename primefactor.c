#include <stdio.h>
int main()
{
    int num, i=1, j, k;
    printf("Enter a Number:\n");
    scanf("%d", &num);

    printf("The Prime factors of %d are:\n",num);
     
     while (i<=num)
     {
        k=0;
        if (num%i==0)
        {
            j=1;
            while (j<=i)
            {
                if (i%j==0)
                k++;

            j++;
            }

            if (k==2)
            
                printf("%d\n",i);
            
            
            i++;

        }
     }
     return 0;


}