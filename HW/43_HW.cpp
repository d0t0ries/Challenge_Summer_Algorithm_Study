#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;
int a[1001], n;
int Count(int s) {
    int i, cnt = 1, sum = 0;
    for (i = 1; i <= n; i++) {
        if (sum + a[i] > s) {
            cnt++;
            sum = a[i];
        }
        else sum = sum + a[i];
    }
    return cnt;
}
int main() {
    int m, i, lt = 1, rt = 0, mid, res;
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++) {
               scanf("%d", &a[i]);
               rt = rt + a[i];
        }
            while(lt<=rt){
                mid = (lt+rt) / 2;
                if (Count(mid) <= m) {
                    res = mid;
                    rt = mid - 1;
                }
                else lt = mid + 1;
        }
       printf("%d", res);
    return 0;
}
//43 결정 알고리즘. 예시는 2개로도 담을 수 있음 하지만 최소가 아니기 때문에  답이 아닌 것.
