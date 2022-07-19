#include <stdio.h>
#include <vector>
using namespace std;

//int main(){
//	//freopen("input.txt", "rt", stdin);
//	int n, i, cnt=1, max; 
//	scanf("%d", &n);
//	vector<int> num(n);
//	for(i=0; i<n; i++){
//		scanf("%d", &num[i]);
//	}
//	for(i=1; i<n; i++){
//		if(num[i]>=num[i-1]){
//			cnt++;
//			if(cnt>max) max=cnt;
//		}
//		else {
//			cnt=1;
//		}
//	}
//	printf("%d", max);
//	
//	
//	return 0;
//}
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, i, pre, now, cnt, max; 
	scanf("%d", &n);
	scanf("%d", &pre);
	cnt=1;
	for(i=2; i<=n; i++){
		scanf("%d", &now);
		if(now >=pre){
			cnt++;
			if(cnt>max) max=cnt;
		}
		else cnt=1;
		pre=now;
	}
	printf("%d", max);
	
	return 0;
}
