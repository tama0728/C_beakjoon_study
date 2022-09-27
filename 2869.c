//
// Created by 김동윤 on 2022/09/21.
//

#include <stdio.h>

int main(void) {
    int a, b, v, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &v);

    d = (v - b -1) / (a - b) + 1;

    printf("%d", d);
    return 0;
}
