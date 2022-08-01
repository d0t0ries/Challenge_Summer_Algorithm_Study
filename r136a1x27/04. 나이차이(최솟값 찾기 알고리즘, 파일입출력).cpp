// N(2<=N<=100)명의 나이가 입력됩니다. 이 N명의 사람 중 가장 나이차이가 많이 나는 경우는 몇 살일까요?
// 최대 나이 차이를 출력하는 프로그램을 작성하세요.

// 입력설명: 입력 파일은 input.txt로 한다.
// 첫 줄에 자연수 N(2<=N<=100)이 입력되고, 그 다음 줄에 N개의 나이가 입력된다.
// ex) 10
//     13 15 24 23 45 65 33 11 26 42

// 출력설명: 출력 파일은 output.txt로 한다. 첫 줄에 최대 나이차이를 출력한다.
// ex) 54

#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, i, a, max=-214700000, min=2147000000; // int의 최대 최소를 역으로 배정하기
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> a;
        if(a > max) max = a; // max보다 a가 크면 max 갱신시키기
        if(a < min) min = a; // min보다 a가 크면 min 갱신시키기
    }
    cout << max-min;

    return 0;
}
