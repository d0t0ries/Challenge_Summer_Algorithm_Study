#include <stdio.h>
using namespace std;
int cnt[500001]; 

int main() {
	//freopen("input.txt", "rt", stdin); 
//	int n, i, j, cnt;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		cnt=0;
//		for(j=1; j<=i; j++){
//			if(i%j == 0) cnt++;
//		}
//		printf("%d ", cnt);
//	}
	
	int n, i, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=i; j<=n; j=j+i){
			cnt[j]++;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ", cnt[i]);
	}

	return 0;
}
