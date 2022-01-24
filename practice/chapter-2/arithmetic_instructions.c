#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5;
    int b = 7;
    int z;
    z = b * a; //legal
    //b * a = z; //Illegal

    printf("The Value of z is: %d\n", z);
    printf("The Value of a - b is: %d\n", a - b);
    printf("The Value of a * b is: %d\n", a * b);
    printf("The Value of a / b is: %d\n", a / b);

    printf(" 5 when divided by 2 leaves a remainder of %d\n", 5 % 2);

    printf("The value of 4 to the power of 5 is %f\n", pow(4, 5));

    return 0;
}