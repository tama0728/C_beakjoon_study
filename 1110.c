//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int n, k = -1, c = 0;

    scanf("%d", &n);
    k = n;
    do {
        k = ((k%10) * 10) + (k/10 + k%10) % 10;
        c++;
    } while (n != k);
    printf("%d", c);
    return 0;
}