#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main() {
    int i, j, n, tmp, max, cnt=0;
    scanf("%d", &n);
    int a[100];
        for (i =0; i<n; i++) {
            scanf("%d", &a[i]); 
        }
        for (i = 0; i < n-1; i++) {
            max = i;
            for (j = i+1; j < n; j++) {
                if (a[max] < a[j]) {
                    max = j;
                }
                tmp = a[i];
                a[i] = a[max];
                a[max] = tmp;
            }
        }
        for (i = 0; i < n-1; i++) {
            if (a[i] - a[i + 1]>0)
                cnt++;
            if (cnt == 2) {
                printf("%d ", a[i+1]);
                break;
            }
        }
    return 0;
}
//33
