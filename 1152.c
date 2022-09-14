//
// Created by 김동윤 on 2022/09/08.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 0, b = 0, n = 0;
    char string[1000000];

    scanf("%[^\n]s", string);
    if (string[0] == ' '){
        a = 1;
        b = 1;
    } else {n=1;}
//    printf("a : %d, b : %d\n", a, b);

    for (int i = 1; i < 1000000; ++i) {
        if (string[i] == ' '){
            a = 1;
        } else if (string[i] == NULL){
            break;
        }else {
            a = 0;
        }
        if (a == 0 && b == 1){
            n += 1;
            b = a;
        } else {b = a;}
//        printf("a : %d, b : %d\n", a, b);
    }

    printf("%d", n);

    return 0;
}
