#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int score;
    while(scanf("%d", &score) == 1){
        if(score > 100) printf("error\n");
        else if(score >= 90) printf("A\n");
        else if(score >= 80) printf("B\n");  
        else if(score >= 70) printf("C\n");
        else if(score >= 60) printf("D\n");
        else if(score >= 0) printf("E\n");
        else printf("error\n");
    }
}