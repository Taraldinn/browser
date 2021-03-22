#include <stdbool.h>
#include <stdio.h>
int main(void)
{

    int a = (int)30;
    int b = 30;
    int c = 10;
    int d = 10;
    bool a_is_greater = a > b;
    printf("A is greater than B-%d\n", a_is_greater);
    bool a_is_smaller = a < b;
    printf("A is smaller than B= %d\n", a_is_smaller);
    bool a_is_not_b = a != b;
    printf("a is smaller than B-%d\n", a_is_not_b);
    bool c_is_greater_equal = c >= d;
    printf("c is greater or equal to D - %d\n", c_is_greater_equal);

    return 0;
}