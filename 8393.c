//
// Created by 김동윤 on 2022/09/05.
//

#include <stdio.h>

int main(void){
    int a, sum = 0;
    scanf("%d", &a);

    for (int i=1; i<=a; i++){
        sum += i;
    }
    printf("%d", sum);

    return 0;
}