//
// Created by 김동윤 on 2022/09/06.
//
#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; ++i) {
        if (i <100) count += 1;
        else {
            int a, b, c, d1, d2;
            a = i / 100;
            b = i / 10 - a * 10;
            c = i - a * 100 - b * 10;

            d1 = a - b;
            d2 = b - c;

            if (d1 == d2) count += 1;
        }
    }
    printf("%d", count);
    return 0;
}