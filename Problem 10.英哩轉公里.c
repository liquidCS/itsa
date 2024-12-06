#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double n;
    scanf("%lf", &n);
    printf("%.1lf", round(n*1.6*10)/10);
}
