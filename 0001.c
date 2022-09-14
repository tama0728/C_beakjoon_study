#include <stdio.h>

int main() {
    char s[10] = " as as ";
    for (int i = 0; i < 10; ++i) {

        if (s[i] == ' '){
            printf("1");
        } else if (s[i] == NULL){
            break;
        }
        else{
            printf("0");
        }

    }

    return 0;
}
