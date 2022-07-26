#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	do {
		cin >>  N;
	} while (N < 3 or N>100);

	int *arrayN = new int[N];
	int *distanceofarrayN = new int[N - 1];//배열의 두 값의 차이를 담을 배열 

	for (int i = 0; i < N; i++) {//사용자가 입력하는 수열의 값 N개 저장 
		cin >> arrayN[i];
	}

	for (int i = 0; i < N - 1; i++) {
		distanceofarrayN[i] = abs(arrayN[i] - arrayN[i + 1]);
	}

	sort(distanceofarrayN, distanceofarrayN + (N - 1));//distanceofarrayN[N-2]까지 오름차순 정렬

	for (int i = 0; i < N - 1; i++) {
		if (distanceofarrayN[i] != i+1) {
			cout << "NO" << endl;
			delete[] arrayN;
			delete[] distanceofarrayN;
			return 0;
		}
	}
	cout << "YES" << endl;


	delete[] arrayN;
	delete[] distanceofarrayN;

	return 0;
}
