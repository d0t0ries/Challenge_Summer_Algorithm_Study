#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, n, j, tmp;
    scanf("%d", &n);
    vector<int> a(n + 1);
    printf("%d! = ", n);
    for (i = 2; i <= n; i++) {
        tmp = i;
        j = 2;
        while (1) {//무한 돌리기
            if (tmp % j == 0) {
                a[j]++;
                tmp = tmp / j;//다시나눠지는지 확인
            }
            else j++; //나누어 떨어지지 않는다면 다른 수로 나눠봐야하니까 나누는 수 j 증가
            if (tmp == 1) break; //다 나누어본 상태
        }
    }

    for (i = 2; i < n + 1; i++) {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }
    return 0;
}
//27. 같은 소수로 나눠 떨어지지 않을 때까지 계속 나누다가 안되면 그떄 다른 수로 나누기 : 이 방법을 쓰면 소수로만 나눌 수 있음.
