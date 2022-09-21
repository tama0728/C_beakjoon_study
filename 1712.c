//
// Created by 김동윤 on 2022/09/21.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    long n;
    scanf("%d %d %d", &a, &b, &c);
    if (b >= c){ printf("-1");}
    else {
        n = a/(c - b);
//        printf("%d\n", n);
        while (a + b * n >= c * n){n++;}
        printf("%d\n", n);
    }

    return 0;
}
