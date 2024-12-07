#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double height, weight;
    scanf("%lf %lf", &weight, &height);
    height /= 100;

    printf("%.2lf\n", round(weight / (height*height) * 100) / 100);

    return 0;
}
