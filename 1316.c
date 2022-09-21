//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    char word[101];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int c[26] = {0,};         // 해당 알파벳이 나왔었는지 확인
        int flag = 0;
        scanf("%s", word);
        int j = 0;
        while (j < 100) {
            char t = word[j];
            if (t == NULL) { break; }
            else if (c[(int) t - 97] != 0) {
                flag = 1;
                break;
            }
            while (t == word[j + 1]) {
                j++;
            }
            c[(int) t - 97] = 1;
            j++;
        }
        if (flag == 0) {
            sum++;}
            flag = 0;
        }
        printf("%d\n", sum);
        return 0;
    }
