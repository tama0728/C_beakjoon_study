//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int c;
        float sum = 0;
        scanf("%d", &c);
        int k[1000] = {0};
        for (int j = 0; j < c; ++j) {
            scanf("%d", &k[j]);
            sum += k[j];
        }
        sum /= c;

        int m = 0;

        for (int j = 0; j < c; ++j) {
            if (k[j] > sum){
                m += 1;
            }
        }
        printf("%.3f%%\n", (float)m/c * 100);
    }
    return 0;
}