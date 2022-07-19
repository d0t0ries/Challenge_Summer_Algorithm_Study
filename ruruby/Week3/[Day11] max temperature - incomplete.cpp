#include <iostream>
#include <limits.h>
using namespace std;

int main() {

	int N, K;
	int temp;
	int max = INT_MIN;
	//int max = –2147483648;//최소값을 저장해놓아서 이후 계산한 값이 최대값으로 대체될 수 있도록 한다.
	int sum = 0;

	do {
		cin >> N >> K;
	} while (2 > N or 100000 < N or K<1 or K>N);

	int *array = new int[N];//전달 받은 날만큼의 온도를 저장하기 위한 배열을 동적 할당

	for (int i = 0; i < N; i++) {//전달 받은 온도를 배열에 저장
		cin >> temp;
		if (temp < -100 or temp > 100) {
			i = 0;
			cout << "-100이상 100이하의 온도만 입력" << endl;
		}
		array[i] = temp;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (i + j >= N)//만약 배열 범위 벗어날 경우
				break;
			sum += array[i+j];
		}
		max = (max < sum) ? sum : max;//합한 값의 최대값을 max 변수에 저장
		sum = 0;//합을 0으로 초기화. 새롭게 더하기 위함.
	}
	cout << max;

	delete[] array;//동적 할당한 배열을 할당 해제
	return 0;
}