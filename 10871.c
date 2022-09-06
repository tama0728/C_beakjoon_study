//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int n, c, a;
    scanf("%d %d", &n, &c);

    for (int i = 0; i < n - 1; i++){
        scanf("%d", &a);

        if (a < c){
            printf("%d ", a);
        }
    }
    scanf("%d", &a);

    if (a < c){
        printf("%d", a);
    }
    return 0;
}