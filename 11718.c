//
// Created by 김동윤 on 2022/09/28.
//

#include <stdio.h>

int main(void) {
    char txt[101];
    while (scanf("%[^\n]s",txt)!=EOF) {
        printf("%s\n", txt);
        getchar();
    }
    return 0;
}