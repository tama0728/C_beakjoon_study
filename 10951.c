//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int a = 1, b = 1;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a + b);
    }
    return 0;
}