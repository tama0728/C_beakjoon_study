//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        char t[80];
        int c = 0, w = 0;
        scanf("%s", t);
        for (int j = 0; j < strlen(t); ++j) {
            if (t[j] == 'O'){
                c += 1 + w;
                w += 1;
            } else{
                w = 0;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}