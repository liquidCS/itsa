#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, ii, ans;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        ans = 2;
        scanf("%d", &ii);
        if(ii > 31){
            printf("Value of more than 31\n");
            continue;
        }
        for(int j =0; j<ii-1; j++){
            ans *= 2;
        }
        printf("%d\n", ans);
    }
}
