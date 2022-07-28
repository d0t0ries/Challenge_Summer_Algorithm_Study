// 자연수 N이 입력되면 1부터 N까지의 수 중 M의 배수합을 출력
// 입력설명: 첫 줄에 자연수 N과 M이 차례대로 입력된다(3<=M<N<=1000)
// 출력설명: 첫 줄에 M의 배수합을 출력한다

#include <iostream>
using namespace std;
int main()
{
    int n, m, i, sum=0;
    
    cin >> n >> m;

    for(i=1; i<n; i++){ // i가 1~N까지 돈다
        if(i%m==0){ // i가 M일때만 sum에 누적시킨다.
            sum=sum+i;
        }
    }
    cout << sum;
    return 0;
}
