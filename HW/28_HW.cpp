#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, n, j, tmp, num2=0, num5=0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) { //!은 2부터 n까지 곱하는 것. 수가 너무 커지는 걸 방지하기 위해 이 for문은 꼭 있어야
        tmp = i;
        j = 2;
        while (1) {//무한 돌리기
            if (tmp % j == 0) {
                if (j == 5) num5++;
                else if (j == 2) num2++;
                tmp = tmp / j;

            }
            else j++;
            if(tmp==1 )break; //다 나누어본 상태
        }
    }
            if(num5<num2)printf("%d ", num5);
            else if (num5>num2) printf("%d ", num2);
    return 0;
}
//28
