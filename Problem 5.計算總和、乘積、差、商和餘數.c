#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d-%d=%d\n", a, b, a-b);
    if(b < 0) printf("%d/%d=%d...%d\n", a, b, a/b, a%b);
    else if(a < 0) printf("%d/%d=%d...%d\n", a, b, a/b -1 , a%b + b);
    else printf("%d/%d=%d...%d\n", a, b, a/b, a%b);
}
