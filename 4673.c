//
// Created by 김동윤 on 2022/09/06.
//
#include <stdio.h>

int main() {
    int self[10000] = {0};


    for (int i = 0; i < 10000; ++i) {
        self[i] = i + 1;
    }

    for (int i = 1; i < 10001; ++i) {
        int a = 0, b = 0, c = 0, d = 0, sum = 0;
        a = i / 1000;
        b = i / 100 - a * 10;
        c = i / 10 - a * 100 - b * 10;
        d = i - a * 1000 - b * 100 - c * 10 ;
        sum = i + a + b + c + d;
        if (sum > 10000) continue;
        self[sum - 1] = 0;
    }

    for (int i = 0; i < 10000; ++i) {
        if (self[i] != 0) printf("%d\n", i + 1);
    }
    return 0;
}