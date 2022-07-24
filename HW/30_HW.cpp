#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, n, digit, lt = 1, rt, cur, k = 1, res=0;
    scanf("%d", &n);


    while (lt != 0) {
        lt = n / (k * 10);
        cur = (n / k)%10;
        rt = n % k;

        if (cur > 3) res += k * (lt + 1);
        else if (cur < 3) res += lt * k;
        else res += (lt * k) + rt + 1;
        k *= 10;

    }

    printf("%d", res);
    return 0;
}

//30
