//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void) {
    int a, b, temp;

    scanf("%d %d", &a, &b);
    temp = a * 60 + b;

    temp -= 45;

    if (temp < 0) {
        temp += 1440;
    } else if (temp > 1440) {
        temp -= 1440;
    }

    printf("%d %d", temp/60, temp%60);

    return 0;
}