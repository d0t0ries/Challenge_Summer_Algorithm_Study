#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, j, n, tmp=0, num, cnt=0;
    scanf("%d", &n);
    int a[100] = {};
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {
        tmp = a[i];
        for (j = i-1; j >= 0; j--) {
            if (a[j] > tmp) a[j + 1] = a[j];
            else break;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d", &a[i]);
    }
    return 0;
}
//36
