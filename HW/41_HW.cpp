#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int a, b=1, cnt=0, tmp, i;
    scanf("%d", &a);
    tmp = a;
    a--; //a에서 1빼기
    while (a>0) { //a가 나눠줄 게 없을 때까지
        b++; //b가 2가 됨. b는 연속된 자연수를 뭘로 할껀지
        a -= b; //a에서 2빼기
        if (a % b == 0) {
            for (i = 1; i < b; i++) {
                printf("%d + ", (a / b) + i);
        }
            printf("%d = %d\n", (a / b) + i, tmp);
            cnt++;
        }
   }
    printf("%d", cnt);
    return 0;
}
//41. 속도 빠른 강의 버전. 하지만 다른 방법으로 풀 수 있을거같음.
