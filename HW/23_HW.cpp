#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> //메모리 낭비를 막기 위해 동적으로 잡음
using namespace std;

int main() {
	int i, n,sum=1, num=0, max=0;
	scanf("%d", &n);
	std::vector<int> tmp(n);
	scanf("%d", &tmp[0]);
	for (i = 1; i < n; i++) {
		scanf("%d", &tmp[i]);
		if (tmp[i-1] <= tmp[i]) {
			sum++;
			if (max<sum) max = sum;
		}
		else sum = 1;
	}
	printf("%d",max);
	return 0;

}

//23. 변수 구분 잘하기!
