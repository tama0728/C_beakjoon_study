//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    char d[15];
    int t = 0;

    scanf("%s", d);

    for (int i = 0; i < 15; ++i) {
        char temp = d[i];
        if (temp == NULL){ break;}

        int n = (int)d[i];

        if (n < 68){t+=3;}
        else if (n < 71){t+=4;}
        else if (n < 74){t+=5;}
        else if (n < 77){t+=6;}
        else if (n < 80){t+=7;}
        else if (n < 84){t+=8;}
        else if (n < 87){t+=9;}
        else{t+=10;}
    }
    printf("%d", t);
    return 0;
}
