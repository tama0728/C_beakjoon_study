//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    char a[3], b[3];
    int x, y;

    scanf("%s", a);
    scanf("%s", b);

    x = ((int)a[2] - 48) * 100 + ((int)a[1] - 48) * 10 + ((int)a[0] - 48);
    y = ((int)b[2] - 48) * 100 + ((int)b[1] - 48) * 10 + ((int)b[0] - 48);

    if (x > y){ printf("%d", x);}
    else { printf("%d", y);}

    return 0;
}
