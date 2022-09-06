//
// Created by 김동윤 on 2022/09/06.
//
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n[26] = {0};
    scanf("%s", s);

    for (int j = 97; j < 123; ++j) {
        int f = 1;
        for (int i = 0; i < strlen(s); ++i) {
            if (s[i] == (char)j) {
                n[j-97] = i;
                f = 0;
                break;
            }
        }
        if (f == 1) n[j-97] = -1;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%d ", n[i]);
    }
    printf("\b");
    return 0;
}