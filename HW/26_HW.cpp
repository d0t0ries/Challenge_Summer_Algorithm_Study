#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, n, j;
    scanf("%d", &n);
    vector<int> a(n);
    vector<int> b(n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = 1;
    }
    for (i = 0; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if (a[j] >= a[i]) b[i]++;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}

/*26 배열 1개로만 만들기
int i, j, n, cnt=0;
scanf("%d", &n);
vector<int> a(n+1);
for(i=1;i<=n;i++){
scanf("d", &a[i]);
}
printf("1 ");
for(i=2; i<n, i++){
cnt=0;
for(j=i-1;j>=1;j--){
if(a[j]>=a[i]) cnt++;}
printf("%d ", cnt+1) //처음 cnt를 0으로 정의했기 때문
}
return 0;
*/
// 큰 수인 경우 병합정렬 nlog n을 이용하여 발견 가능
