#include <stdio.h>

int main()
{
    int num = 1; // 126453
    // printf("num=%d\n", num);
    int more_thousand = num - (num % 10000);
    int thousands = num / 1000 % 10;
    int hundreds = num / 100 % 10;
    int tens = num / 10 % 10;
    int ones = num / 1 % 10;
    // printf("ones=%d\n", ones);
    // printf("tens=%d\n", tens);
    // printf("hundreds=%d\n", hundreds);
    // printf("thousands=%d\n", thousands);

    // Swap thousands and ones
    int temp = thousands;
    thousands = ones;
    ones = temp;
    // printf("new_ones=%d\n", ones);
    // printf("new_thousands=%d\n", thousands);

    int ans_num = more_thousand + ones * 1 + tens * 10 + hundreds * 100 + thousands * 1000;
    printf("ans_num=%d\n", ans_num);
    return 0;
}
