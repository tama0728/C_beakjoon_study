//
// Created by 김동윤 on 2022/09/29.
//

#include <stdio.h>

int main(void) {
    char c;
    int i=0; int j=0;
    while(j<100){
        i = 0;
        while(i<100){
            c=getchar();
            if(c==EOF)
                return 0;
            putchar(c);
            i++;
        }
        j++;
    }

    return 0;
}
