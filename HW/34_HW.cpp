#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, j, n, tmp=0, num, cnt=0;
    scanf("%d", &n);
    int a[100];
        for (i =0; i<n; i++) {
            scanf("%d", &a[i]); 
        }
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if (a[j] > a[j+1]) {
                    tmp=a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
        for (i = 0; i < n; i++) {
              printf("%d ", a[i]);
         }
    return 0;
}

//34
