#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int count = n/6 - n/12;
    printf("%d\n", (12 * count) / 2 * count);
}
