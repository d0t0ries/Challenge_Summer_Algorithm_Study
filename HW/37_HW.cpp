#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int s, i, j, n, tmp=0, pos, cnt=0, a;
    scanf("%d %d",&s, &n);
    int c[10] = {};
    for (i = 0; i < n; i++) {
        scanf("%d", &a);
        pos = -1;
        for (j = 0; j < s; j++) {
            if (c[j] == a) pos = j;
        }
        if (pos == -1) { //miss인 경우
            for (j = s - 1; j >= 1; j--) { //맨 뒤부터 돌기
                c[j] = c[j - 1];
            }//일반 삽입정렬
        }
        else { //hit인 경우
            for (j = pos; j >= 1; j--) { //hit난 지점부터 for문
                c[j] = c[j - 1];
            }
        }
        c[j] = a; //현재작업 넣기. if/else 어디로 가든 j는 0이된다.

    }
    for (i = 0; i < s; i++) {
        printf("%d", c[i]);
    }
    return 0;
}
//37 어렵다!!!
