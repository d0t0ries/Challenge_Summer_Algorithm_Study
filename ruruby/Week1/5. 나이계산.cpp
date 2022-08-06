#include <stdio.h>

int main() {
	char a[20];
	int year, age;
	scanf("%s", &a);
	if(a[7]=='1' || a[7]=='2') year=1900+((a[0]-48)*10+(a[1]-48));//scanf하면 문자열로 입력됨. 그리고 ASCII에서 0이 48이네. 
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - 48));//각 출생 년도마다 십진수 그대로 변경해주니까 계산이 그대로 됨. 
	age = 2019 - year + 1;// 태어난 해를 현재 해에 빼고 1을 더하니까 최종 나이 나옴. 
	printf("%d", age);
	if (a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	return 0;
}
