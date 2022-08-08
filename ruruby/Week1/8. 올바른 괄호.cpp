#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[31];//문자열 최대 길이는 30이므로, 31 크기의 배열 생성
	int cnt = 0;
	scanf("%s", &a);//사용자의 입력 받음
	for (int i = 0; a[i] != '\0'; i++) {//공백문자 나올 때까지 배열 내의 문자열 체크
		if (a[i] == '(') cnt++;//여는 괄호와 닫는 괄호의 개수가 같아야 올바른 괄호이므로, 여는 괄호는 cnt++ 해주고, 닫는 괄호는  cnt-- 해준다.
		else if (a[i] == ')') cnt--;
		if (cnt < 0) break;//여는 괄호보다 닫는 괄호가 많아지면 잘못된 괄호이므로 break해줌
	}
	if (cnt == 0) printf("YES\n");
	else printf("NO\n");
	return 0;
}