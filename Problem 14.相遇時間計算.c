#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double distance;
    scanf("%lf", &distance);

    printf("%.0lf\n", ceil(distance / (1 - 2.54*30 / 100)));
}
