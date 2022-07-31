#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, j, n,A,B, tmp = 0, pos, cnt = 0;
    int a[101] = {};
    int b[101] = {};
    int c[202] = {};
    scanf("%d", &A);
    for (i = 1; i <= A; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &B);
    for (i = 1; i <= B; i++) {
        scanf("%d", &b[i]);
    }
    n = A + B;
    A = 1;
    B = 1;
    for (i=1; i<=n;i++) {
        if (a[A] == 0) {
            c[i] = b[B];
            A++;
            B++;
        }
        else if (b[B] == 0) {
            c[i] = a[A];
            A++;
            B++;
        }
        else if (a[A] >= b[B]) {
            c[i] = b[B];
            B++;
        }
        else if (a[A] < b[B]) {
            c[i] = a[A];
            A++;
        }
      
    }
    for (i = 1; i <= n;i++) {
                    printf("%d ",c[i]);
    }
    return 0;
}
//39
