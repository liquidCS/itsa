#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double tempC, result;
    scanf("%lf", &tempC);
    result = tempC * (9.0 / 5) + 32;
    printf("%.1lf\n", round(result*10)/10)
	return 0;
}
