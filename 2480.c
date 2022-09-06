//
// Created by 김동윤 on 2022/09/05.
//
int main(void){
    int a, b, c, count = 0, t = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b){
        count += 1;
        t = a;
    } if (b == c){
        count += 1;
        t = b;
    } if (c == a){
        count += 1;
        t = c;
    }

    if (count == 0){
        t = a;
        if (b > t)
            t = b;
        if (c > t)
            t = c;
        printf("%d", t * 100);
    } else if (count == 1) {
        printf("%d", 1000 + t * 100);
    } else {
        printf("%d", 10000 + t * 1000);
    }
    return 0;
}