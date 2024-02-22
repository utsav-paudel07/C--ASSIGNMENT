#include <stdio.h>
int main()
 {
    int num1, num2, hcf, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    hcf = num1;
    while (num2 != 0)
     {
        int temp = hcf;
        hcf = num2;
        num2 = temp % num2;
    }
    lcm = (num1 * num2) / hcf;

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
