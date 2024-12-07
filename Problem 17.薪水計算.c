#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int workTime, pay;
    scanf("%d %d", &workTime, &pay);

    double totalPay = 0;

    if(workTime <= 60) totalPay += workTime * pay;

    if(workTime > 60 && workTime <= 120) {
        totalPay += 60 * pay;
        totalPay += (workTime - 60) * pay * 1.33;
    }

    if(workTime > 120) {
        totalPay += 60 * pay;
        totalPay += 60 * pay * 1.33;
        totalPay += (workTime - 120) * pay * 1.66;
    }


    printf("%.1lf\n", totalPay);

    return 0;

}
