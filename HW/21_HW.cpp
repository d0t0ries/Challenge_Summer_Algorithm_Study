#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a[10] = {};
int b[10] = {};

int main() {
   int i, A = 0, B = 0, win = 0;
   for (i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
   }
   for (i = 0; i < 10; i++) {
      scanf("%d", &b[i]);
   }
   for (i = 0; i < 10; i++) {
      if (a[i] > b[i]) {
         A = A + 3;
         win = 1;
      }
      else if (a[i] < b[i]) {
         B = B + 3;
         win = 2;
      }
      else {
         A++;
         B++;      }
   }

   
   if (A > B) printf("%d %d \nA",A,B);
   else if (A < B) printf("%d %d \nB", A,B);
   else if(A == B && win == 1) printf("%d %d \nA", A,B);
   else if (A == B && win == 2) printf("%d %d \nB",A,B);
   else if (win == 0) printf("%d %d \nD",A,B);
   return 0;

}

//21. 변수 적게 쓰기!
