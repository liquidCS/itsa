#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int temp;
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if(temp < 50 || temp > 70) temp = 100;
        printf("%d\n", temp);
    }
}
