#include <stdio.h>
#include <string.h>//strlwr 함수 사용을 위해 포함

int main() {
	int word[101] = { '\0', };//100을 초과하지 않는다고 하므로, 100까지는 받을 수 있는 101 길이 배열 선언
	int output[101];

	printf("%s", word);
	for (int i = 0; i < 101; i++) {
		if (word[i] == '\0') {
			break;
		}
		else if(word[i] != ' '){
			output[i] = strlwr(word[i]);
		}
	}
}