#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void cusprint(int a){
    for(int i=0; i<a; i++){
        printf("%d", a);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a, f;
        scanf("%d %d", &a, &f);

        for(int j=0; j<f; j++){ // same amplitude
            for(int curra = 1; curra <= a; curra++){
                cusprint(curra);
            }
            for(int curra = a-1; curra >0; curra--){
                cusprint(curra);
            }
            if(i == n-1 && j == f-1) return 0;
            printf("\n");
        }

    }

}
