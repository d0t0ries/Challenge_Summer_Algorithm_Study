#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include<string>
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
using namespace std;

int main() {
	int n, num, i, A = 0, B = 0,top=-21400000,sum=0;
	scanf("%d %d", &A,&B);
	std::vector<int> tmp(A);
	for (i = 0; i < A; i++) {
		scanf("%d", &tmp[i]);
	}

	for (i = 0; i < B; i++) {
		sum += tmp[i];
	}
	top = sum;
	for (i = B; i < A; i++) {
		sum = sum - tmp[i]+tmp[i-B]; //중요한 부분
		if (top < sum) top = sum;
	}


	/*내가 한 것 (time limit)
	int tmp[100000] = {};
	for (i = 0; i <= A-B; i++) {
		for (j = i; j < i+B; j++) {
			sum += tmp[j];
		}
		if (top < sum) top = sum;
		sum = 0;
	}	*/

	printf("%d",top);
	return 0;

}

//22. 시간 더 줄이기

