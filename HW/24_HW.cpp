#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<string>
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
#include <algorithm>
using namespace std;

int main() {
   int i, n, num=0, asr=0;
   scanf("%d", &n);
   vector<int> arr(n);
   vector<int> ch(n);
   scanf("%d",&arr[0]);
     for (i = 1; i < n; i++) {
      scanf("%d", &arr[i]);
      num = abs(arr[i] - arr[i - 1]);
      if(num>0&& num<n&& ch[num]==0) ch[num]=1; // and 연산자는 앞에서 부터 조건을 체크하기 때문에 순서 중요 
       else {
                  printf("NO");
           return 0;
       }
     }  
    printf("YES");
    /* 내가 생각한 별로 안좋은 방법...
    #include<stdlib.h>
   for (i = 1; i < n; i++) {
      if (minus[i] != 1) {
         asr = 1;
         printf("NO");
         break;
      }
   }
   if (asr != 1) printf("YES");
  
  */
  return 0;
   }
  

//24 나는 배열이 편해서 자꾸 배열로 만드는 데 변수 2개만으로도 운용 가능
