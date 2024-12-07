#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a1, a2, b1, b2;
    scanf("%lf %lf %lf %lf", &a1, &a2, &b1, &b2);
    double dx = a1 - b1;
    double dy = a2 - b2;

    printf("%.2lf\n", round(sqrt(dx*dx + dy*dy)*100) / 100);
}
