#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
    double height;
    int gender;
    while(scanf("%lf %d", &height, &gender) != EOF){
        if( gender == 1){
            printf("%.1lf\n", (height - 80)*0.7 );
        }
        else{
            printf("%.1lf\n", (height - 70)*0.6 );
        }
    }
}
