#include <iostream>

using namespace std;

int main()
{
	int n;
	int cnt = 1;
	int max_cnt = 0;

	do {
		cin >> n;
	} while (n < 5 or n>100000);

	int *ptr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> ptr[i];
		if (ptr[i] > 100000)//입력받은 숫자가 100,000이하가 아닐 경우, i를 1줄임으로써 반복문 다시 돌아서 해당 인덱스에 값 다시 받음
			i--;
	}

	for (int i = 0; i < n - 1; i++) {
		if (ptr[i] <= ptr[i + 1]) {
			cnt += 1;
			if (cnt > max_cnt) {
				max_cnt = cnt;//max_cnt와 현재 cnt 변수의 값과 비교해서 cnt가 더 크면 max_cnt에 cnt 값을 저장
			}
		}
		else {
			cnt = 1;
		}
	}

	cout << max_cnt;
	delete[] ptr;
	return 0;
}