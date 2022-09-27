//
// Created by 김동윤 on 2022/09/21.
//

#include <stdio.h>

int main(void) {
    int n = 1, k, t, a;
    scanf("%d", &k);
    while (n*(n+1)/2 < k){++n;}

    t = n + 1;
    a = k - n*(n-1)/2;
    if (n % 2 == 0){printf("%d/%d", a, t - a);}
    else{printf("%d/%d", t - a, a);}
    return 0;
}
