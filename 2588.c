//
// Created by 김동윤 on 2022/09/02.
//
#include <stdio.h>

int main() {
    int a, b, b1, b2, b3;
    scanf("%d", &a);
    scanf("%d", &b);

    b1 = (b%100)%10;
    b2 = ((b%100) - b1) / 10;
    b3 = (b - b2 - b1) / 100;
    printf("%d\n", a * b1);
    printf("%d\n", a * b2);
    printf("%d\n", a * b3);
    printf("%d\n", a * b);

    return 0;
}