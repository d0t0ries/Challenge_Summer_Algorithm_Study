#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<string>
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
#include<stdlib.h>
using namespace std; 

int main() {
   int i, n,j;
   scanf("%d", &n);
   std::vector<int> a(n); 
   std::vector<int> b(n); 

   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
b[i] =1;
   }
   for (i = 0; i < n; i++) {
for (j=0; j<n; j++){
if(a[j]>a[i]) b[i]++;
      }
      }
   for (i = 0; i < n; i++) {
         printf("%d", b[i]);
      }
  return 0;
} 

//25 이중 for문 순위 문제면 순위 배열은 1로 초기화하기
