//
// Created by 김동윤 on 2022/09/05.
//

#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    temp = a * 60 + b + c;

    if (temp >= 1440) {
        temp -= 1440;
    }

    printf("%d %d", temp/60, temp%60);

    return 0;
}