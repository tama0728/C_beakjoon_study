//
// Created by 김동윤 on 2022/09/29.
//

#include <stdio.h>

int main(void) {
    char txt[101];
    while (scanf("%[^\n]",txt)!=EOF) {
        printf("%s\n", txt);
        getchar();
    }
    return 0;
}
