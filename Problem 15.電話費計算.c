#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double distance, price;
    scanf("%lf", &distance);

    price = distance * 0.9;
    if(distance > 800 && distance < 1500) price*=0.9;
    if(distance >= 1500) price*=0.79;
    printf("%.1lf\n", price);
}
