//
// Created by 김동윤 on 2022/09/05.
//
#include <stdio.h>

int main(void){
    int a, sum, temp = 0;
    scanf("%d", &sum);
    scanf("%d", &a);

    for (int i=1; i<=a; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        temp += x * y;
    }
    if (sum == temp){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}