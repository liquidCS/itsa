#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, a, b;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(b > a) {
            int temp = a;
            a = b;
            b = temp;
        }
        printf("%d\n", (b + a) * (a - b + 1) / 2);
    }
}
