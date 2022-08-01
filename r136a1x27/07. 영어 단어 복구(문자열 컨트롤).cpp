// 문제입력

// 입력설명: 
// 출력설명: 

// 입력 예제
// 출력 예제

/* 알고리즘 생각해보기
/ 1. 공백인지 확인
/ 2. 대문자일 경우 소문자로 변환
/  경험적으로 ASCII 코드에서 일정 숫자 빼면 대문자 -> 소문자 변환 가능 알고있음
/ 3. 소문자일 경우 그대로 저장
*/

#include <iostream>
using namespace std;
int main()
{
    char a[101], b[101];
    int i, p=0;
    gets(a);
    for(i=0; a[i]!='\0'; i++){
        if(a[i]!=' '){
            if(a[i]>=65 && a[i] <= 90){
                b[p++]=a[i]+32;
            }
            else b[p++]=a[i];
        }
    }
    b[p]='\0';
    printf("%s\n",b);
    return 0;
}
