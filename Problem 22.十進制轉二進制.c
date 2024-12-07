#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int num, curr;
    scanf("%d", &num);

    if(num > 0){
        printf("0");    // first bit
        curr = 64;
        for(int i=0; i<7; i++){
            if(num / curr == 1){
                printf("1");
                num %= curr;
            }
            else printf("0");
            curr /= 2;
        }
    }
    else {
        num = -num;
        printf("1");    // first bit
        curr = 128;
        for(int i=0; i<7; i++){
            if(num / curr == 1){
                printf("0");
                num %= curr;
            }
            else printf("1");
            curr /= 2;
        }
    }
    printf("\n");

    return 0;
}
