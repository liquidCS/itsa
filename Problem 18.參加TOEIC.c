#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max = 0, between600to700 = 0, biggerthan900 = 0,temp;
    double avg = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        if(temp > max) max = temp;
        avg += temp;
        if(temp >= 900) biggerthan900++;
        if(temp >= 600 && temp <= 700) between600to700++;
    }

    avg /= n;


    printf("%d\n", max);
    printf("%d\n%d\n", biggerthan900, between600to700);
    printf("%.1lf\n", avg);
}
