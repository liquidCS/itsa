#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);

    printf("百元 %d\n", money / 100);
    money %= 100;
    printf("十元 %d\n", money / 10);
    money %= 10;
    printf("壹元 %d\n", money);
}
