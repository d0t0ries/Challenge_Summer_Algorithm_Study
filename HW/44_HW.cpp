#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;
int n;
int Count(int len , int x[]) { //len은 답의 후보, x[]는 마굿간 좌표
    int i, cnt = 1, pos=x[1]; //cnt=1은 한 마리 말을 x[1]좌표에 무조건 넣어준다는 뜻
    for (i = 2; i <= n; i++) {
        if (x[i]-pos>=len) { //첫번째 말이 들어간 좌표를 빼보기
            cnt++; //값이 len보다 더 크면 마굿간에 말을 넣을 수 있음
            pos = x[i];
        }
    }
    return cnt; //최대 몇마리 까지 넣을 수 있는지 값을 리턴
}
int main() {
    int m, i, lt = 1, rt = 0, mid, res;
    scanf("%d %d", &n, &m);
    int* x = new int[n + 1];
    for (i = 1; i <= n; i++) {
               scanf("%d", &x[i]);
        }
    sort(x + 1, x + n + 1);
    rt = x[n]; //제일 큰 좌표
            while(lt<=rt){ //이분검색
                mid = (lt+rt) / 2;
                if (Count(mid) <= m) { //임의로 mid를 답으로 설정하고 함수돌리기
                    res = mid;
                    lt = mid + 1; //더 큰쪽으로 확장
                }
                else rt = mid - 1;
        }
       printf("%d", res);
       delete[] x;//동적으로 할당된 메모리 영역 해제
    return 0;
}
//44
