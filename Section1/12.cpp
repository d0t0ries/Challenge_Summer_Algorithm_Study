#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, sum=0, cnt=1, digit=9, res=0;
	scanf("%d", &n);
	while(sum+digit<n){
		res=res+(cnt*digit);
		sum=sum+digit;
		cnt++;
		digit=digit*10;
	}
	res = res + ((n-sum)*cnt);
	printf("%d", res);

	return 0;
}
