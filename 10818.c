//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int c, max, min;
    scanf("%d", &c);
    int num[c];

    for(int i=0; i < c; i++){
        scanf("%d", &num[i]);
    }
    max = num[0];
    min = num[0];
    for(int i=1; i < c; i++){
        if (num[i] > max){
            max = num[i];
        }
        if (num[i] < min){
            min = num[i];
        }
    }
    printf("%d %d", min, max);
}