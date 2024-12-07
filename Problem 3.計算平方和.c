#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int nums[6], all = 0;

    for(int i=0; i<6; i++){
        scanf("%d", &nums[i]);
        all += nums[i] * nums[i];
    }

    printf("%d\n", all);

}
