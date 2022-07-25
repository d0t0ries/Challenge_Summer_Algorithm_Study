#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, n, tmp, cnt=0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        tmp = i;
        while (tmp>0)
        {
            if (tmp % 10 ==3) cnt++;
            tmp = tmp / 10;
        }
    }
    printf("%d", cnt);
    return 0;
}

//29 나중에 또 풀어보기!
