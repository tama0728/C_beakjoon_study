//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int n[10] = {0}, c = 0;
    for (int i = 0; i < 10; ++i) {
        int a;
        scanf("%d", &a);
        n[i] = a%42;
    }
    for (int i = 0; i < 10; ++i) {
        if (n[i] == -1){
            continue;
        } else {
            c += 1;
            for (int j = i + 1; j < 10; ++j) {
                if (n[i] == n[j]) {
                    n[j] = -1;
                }
            }
        }
    }
    printf("%d", c);
    return 0;
}