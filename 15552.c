//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    for (int i=1; i<=a; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", x+y);
    }
    return 0;
}