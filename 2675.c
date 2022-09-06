//
// Created by 김동윤 on 2022/09/06.
//
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int c;
        char s[20];
        scanf("%d %s", &c, s);
        for (int k = 0; k < strlen(s); ++k) {
            for (int j = 0; j < c; ++j) {
                printf("%c", s[k]);
            }
        }
        printf("\n");
    }
    return 0;
}