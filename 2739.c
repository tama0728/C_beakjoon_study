//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    for (int i=1; i<=9; i++){
        printf("%d * %d = %d\n", a, i, a*i);
    }
    return 0;
}