#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[100];//일단 충분할 것으로 보이는 정도의 배열 선언. 솔직히 이거 별로인듯..
	int res = 0, cnt = 0, i;
	scanf("%s", &a);//문자가 섞인 문자열을 사용자 입력으로 받음
	for (int i = 0; a[i] != '\0'; i++)//공백문자 만나기 전(입력 받은 문자열 끝나기 전)까지 반복
	{
		if (a[i] >= 48 && a[i] <= 57) {//숫자일 경우(ASCII 문자로 숫자 영역까지로 구분), 기존에 나온 숫자 뒤에 붙여준다. 
			res = res * 10 + a[i] - 48;
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res%i == 0) cnt++;//약수일 경우, cnt 값을 1 증가
	}
	printf("%d\n", cnt);
	return 0;
}