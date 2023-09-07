#include <cstdio>

int sum(int addend_1, int addend_2)
{
    return addend_1 + addend_2;
}

int main()
{
    int number_1 = 1;
    int number_2 = 2;
    int number_sum = sum(number_1, number_2);
    printf("The sum of %d and %d is %d.\n", number_1, number_2, number_sum);
}
