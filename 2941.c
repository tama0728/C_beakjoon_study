//
// Created by 김동윤 on 2022/09/14.
//

#include <stdio.h>

int main(void) {
    int n = 0;
    char s[100];

    scanf("%s", s);

    for (int i = 0; i < 100; ++i) {
        char t = s[i];
        if (t == NULL){ break;}
        else if (t == 'c'){
            t = s[i+1];
            if (t == '='){n++; i++;}
            else if (t == '-'){n++;i++;}
            else{n++;}
        } else if (t == 'd'){
            if (s[i+1] == 'z' && s[i+2] == '='){n+=1;i+=2;}
            else if (s[i+1] == '-'){n++;i++;}
            else{n++;}
        } else if (t == 'l'){
            if (s[i+1] == 'j'){n+=1;i+=1;}
            else{n++;}
        } else if (t == 'n') {
            if (s[i + 1] == 'j') {n+=1;i+=1;}
            else{n++;}
        } else if (t == 's') {
            if (s[i + 1] == '=') {n++;i++;}
            else{n++;}
        } else if (t == 'z') {
            if (s[i + 1] == '=') {n++;i++;}
            else{n++;}
        } else{n++;}
    }
    printf("%d", n);
    return 0;
}
