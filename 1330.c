//
// Created by 김동윤 on 2022/09/02.
//
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf(">");
    } else if (a < b) {
        printf("<");
    } else {
        printf("==");
    }
    return 0;
}