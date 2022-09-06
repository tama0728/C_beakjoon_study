//
// Created by 김동윤 on 2022/09/06.
//
#include <stdio.h>

int main() {
    int n, sum = 0;
    char t[100];
    scanf("%d", &n);
    scanf("%s", t);
    for (int i = 0; i < n; ++i) {
        sum += (int)t[i] - 48;
    }
    printf("%d", sum);
    return 0;
}