#include <stdio.h>

int toInt(char a) {
    if(a == 'X') return 10;
    else return a - '0';
}


int main()
{
    char input;
    int add = 0, add2 = 0;
    for(int i=0; i<10; i++){
        scanf("%c", &input);
        add += toInt(input);
        add2 += add;
        getchar();
    }
    if(add2 % 11 == 0) printf("YES\n");
    else printf("NO\n");
}
