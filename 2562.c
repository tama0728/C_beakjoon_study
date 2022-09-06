//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int num[9], max, c=1;
    for (int i=0; i<9; i++){
        scanf("%d", &num[i]);
    }
    
    max = num[0];

    for (int i = 1; i < 9; ++i) {
        if (num[i] > max){
            max = num[i];
            c = i + 1;
        }
    }
    printf("%d\n%d", max, c);
    return 0;
}