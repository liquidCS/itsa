#include <stdio.h>
int main()
{
    double temp;
    scanf("%lf", &temp);

    double max = temp, min = temp;

    for(int i=0; i<9 ;i++) {
        scanf("%lf", &temp);
        if(temp > max) max = temp;
        if(temp < min) min = temp;
    }

    printf("maximum:%.2lf\n", max);
    printf("minimum:%.2lf\n", min);
    return 0;
}
