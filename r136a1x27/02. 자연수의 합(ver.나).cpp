// 자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요.

// 입력설명: 첫 줄에 자연수 A, B가 공백을 사이에 두고 차례대로 입력된다. (1<=A<B<=100) (ex. 3 7)
// 출력설명: 첫 줄에 더하는 수식과 함께 합을 출력합니다. (ex. 3+4+5+6+7=25)

#include <iostream>
using namespace std;
int main()
{
    int a, b, i, sum=0;
    
    cin >> a >> b;

    for(i=a; i<=b;i++){ // diff1: b 까지 더한다.
        cout << i;
        if(i!=b){ cout << ' + '; } // diff2: if문으로 마지막 +를 처리 => a~b까지 if문 실행됨
        sum += i;
    }
    cout << ' = ' << sum;
    return 0;
}
