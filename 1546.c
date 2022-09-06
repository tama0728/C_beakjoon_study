//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int n, t, max = 0;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &t);
        sum += t;
        if (t > max){
            max = t;
        }
    }
    printf("%f", (sum/max)*100 / n);
    return 0;
}