//
// Created by 김동윤 on 2022/09/21.
//
#include <stdio.h>

int main(void) {
    int k, n = 1;
    scanf("%d", &k);
    while (3*n*(n-1)+1 < k){n++;}
    printf("%d", n);
    return 0;
}
