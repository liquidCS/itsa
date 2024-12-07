#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int inHour, inMin, outHour, outMin;
    scanf("%d %d %d %d", &inHour, &inMin, &outHour, &outMin);
    int totalMin = outHour*60 + outMin - inHour*60 - inMin;
    int totalCost = 0;
    // printf("%d\n", totalMin);

    if(totalMin <= 120) {
        totalCost += totalMin / 30 * 30;
        // totalCost += (totalMin % 30 != 0) * 30;
    }

    if(totalMin > 120 && totalMin <= 240) {
        totalCost += 120;
        totalCost += (totalMin - 120) / 30 * 40;
        // totalCost += ((totalMin - 120) % 30 != 0) * 40;
    }

    if(totalMin >= 240) {
        totalCost += 120;
        totalCost += 160;
        totalCost += (totalMin - 240) / 30 * 60;
        // totalCost += ((totalMin - 240) % 30 != 0) * 60;
    }

    printf("%d\n", totalCost);

    return 0;

}
// 4 57
