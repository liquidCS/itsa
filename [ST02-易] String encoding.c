#include <stdio.h>
#include <string.h>

int Pow(int x,int n){
    int number = 1;
    for(int i = 0; i < n; i++)
        number *= x;
    return(number);
}

int main()
{
    char input[1000];
    while(scanf("%s", input) != EOF){
        int ans = 0;
        for(int i=0; i<strlen(input); i++){
            int temp = input[i] - 'A' + 1;
            ans += temp * Pow(26, strlen(input)-i-1);
        }

        printf("%d\n", ans);
    }
    return 0;
}
