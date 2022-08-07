#include <iostream>
#include <algorithm> //sort() 사용 위해 포함

using namespace std;

bool desc(int a, int b) {//내림차순 정렬을 위해 정의
	return a > b;
}

int main() {
	int N;
	int foregrade=-1;
	do {
		cin >> N;
	} while (N < 1 or N>100);//N 값의 조건에 해당하지 않을 경우, 다시 받음

	int *grades = new int[N];//입력 받을 점수 숫자 크기만큼 배열 동적할당
	int *grades_sorted = new int[N];//입력 받을 점수 숫자 크기만큼 배열 동적할당
	int *order = new int[N];//입력 받을 점수 숫자 크기만큼 배열 동적할당 - 석차 입력용

	for (int i = 0; i < N; i++) {
		cin >> grades[i];
		grades_sorted[i] = grades[i];
	}

	sort(grades_sorted, grades_sorted + N, desc);//내림차순 정렬

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {//j+1이 석차 i+1이 입력받은 순서
			if (grades[i] == grades_sorted[j]) {//여기가 문제//내림차순으로 정렬된 grades_sorted의 인덱스인 j는 석차를 나타낸다.
				if (grades[i] == foregrade) {//이전 점수와 같은 경우, 동일한 석차 넣기
					order[i] = order[i - 1];
				}
				else {
					order[i] = j + 1;//석차 j+1을 입력 받은 점수의 index에 저장
					break;
				}
				foregrade = grades_sorted[j];//이미 확인한 점수를 저장
			}
		}
		cout << order[i] << " ";                                    
	}
}