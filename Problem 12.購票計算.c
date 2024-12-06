#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int ten = n / 10;
    n = n - ten * 10;

    int five = n / 5;
    n = n - five * 5;

    printf("NT10=%d\n",ten);
    printf("NT5=%d\n", five);
    printf("NT1=%d\n", n);

}
