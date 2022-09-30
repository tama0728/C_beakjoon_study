//
// Created by 김동윤 on 2022/09/30.
//

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    for (int i = 0; i < 101; ++i) {
        if (scanf(" %d", &n) != 1) break;
        else sum += n;
    }
    printf("%d", sum);

    return 0;
}
