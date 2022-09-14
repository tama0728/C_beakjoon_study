//
// Created by 김동윤 on 2022/09/07.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int alphabet[28] = {0};
    char c[1000000];

    scanf("%s", c);
    int len = strlen(c);
    for (int i = 0; i < len; ++i) {
        if ((int)c[i] > 96){
            alphabet[(int)c[i] - 97] ++;
        } else{
            alphabet[(int)c[i] - 65] ++;
        }
    }

    int max = 0, p = 0, c_max = 0;
    for (int i = 0; i < 28; ++i) {
        if (alphabet[i] < max) {continue;}
        else if (alphabet[i] > max){
            p = 0;
            max = alphabet[i];
            c_max = i;
            continue;
        } else if (alphabet[i] == max){
            p = 1;
            continue;
        }
    }
    if (p == 0) {
        printf("%c", (char)(c_max + 65));
    } else{
        printf("?");
    }
    return 0;
}
