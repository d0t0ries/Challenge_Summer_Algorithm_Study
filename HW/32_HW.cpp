#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, j, n,num,min;
    scanf("%d", &n);
    int arr[100];
   
        for (i =0; i<n; i++) {
            scanf("%d", &arr[i]); //for 문 없이도 받을 수 있는지 확인
        }
        for (i = 0; i < n-1; i++) {
            min = i;
            for (j = i+1; i < n; j++) {
                if (arr[min] > arr[j]) {
                    min = j;
                }
                num = arr[i];
                arr[i] = arr[min];
                arr[min] = num;
            }
        }
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
   
    return 0;
}

//32
