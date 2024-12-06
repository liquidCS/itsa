#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
    int input;
    while(scanf("%d", &input) == 1){
        if(input%2 == 0) printf("even\n");
        else printf("odd\n");
    }
}
