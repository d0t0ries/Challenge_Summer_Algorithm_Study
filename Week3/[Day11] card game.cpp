#include <iostream>
using namespace std;

int main() {
	int card;
	int Ascore = 0;
	int Bscore = 0;
	int Acard[10];
	int Bcard[10];
	char LastWinner='D';

	//A 카드 입력
	for (int i = 0; i < 10; i++) {
		do {
			cin >> card;
		} while (card < 0 or card >= 10);//0~9 까지의 카드만 받음
		
		Acard[i] = card;
	}

	//B 카드 입력
	for (int i = 0; i < 10; i++) {
		do {
			cin >> card;
		} while (card < 0 or card >= 10);//0~9 까지의 카드만 받음
		Bcard[i] = card;
	}

	for (int i = 0; i < 10; i++) {
		if (Acard[i] > Bcard[i]) {
			Ascore += 3;
			LastWinner = 'A';
		}
		else if (Acard[i] < Bcard[i]) {
			Bscore += 3;
			LastWinner = 'B';
		}
		else {//남은 경우의 수는 Acard[i]==Bcard[i]뿐이기 때문에 else 처리
			Ascore += 1;
			Bscore += 1;
		}
	}

	cout << "A score : " << Ascore << " B score : " << Bscore << endl;
	if (Ascore > Bscore)
		cout << "A";
	else if (Bscore > Ascore)
		cout << "B";
	else {
		if (LastWinner == 'A')
			cout << 'A';
		else if (LastWinner == 'B')
			cout << 'B';
		else
			cout << 'D';
	}

	return 0;
}