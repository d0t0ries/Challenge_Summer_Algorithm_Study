#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int frt=0, fsh, mid=1,num=0, i, n,m; //lt와 rt로 쓰기
    scanf("%d %d", &n, &m);
    vector<int> arr(n);
            for (i = 0; i < n; i++) {
               scanf("%d", &arr[i]);
        }
            sort(arr.begin(), arr.end());
            fsh = n - 1;
            while(frt<=fsh){
                mid = (fsh + frt) / 2;
                if (arr[mid] > m) {
                    fsh = mid-1;
                }
                else if (arr[mid] = m) num = mid;
                else if (arr[mid] < m) {
                    frt = mid+1;
            }
        }
       printf("%d", num+1);//배열이 0부터 시작하므로 +1해줘야 몇번째인지 알 수 있음.
    return 0;
}
//42
