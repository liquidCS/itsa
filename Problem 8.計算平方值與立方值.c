#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, num;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &num);
        printf("%d %d %d\n", num, num*num, num*num*num);
    }
}
