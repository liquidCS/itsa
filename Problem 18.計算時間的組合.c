#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int seconds;
    scanf("%d", &seconds);
    printf("%d days\n", seconds / 86400);
    seconds %= 86400;
    printf("%d hours\n", seconds / 3600);
    seconds %= 3600;
    printf("%d minutes\n", seconds / 60);
    seconds %= 60;
    printf("%d seconds\n", seconds);
    return 0;
}
