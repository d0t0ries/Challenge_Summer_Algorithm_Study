#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, j, cnt=0;
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("1 ");
	for(i=1; i<n; i++){
		cnt=0;
		for(j=i-1; j>=0; j--){
			if(a[i] <= a[j]) cnt++;
		}
		printf("%d ", cnt+1);
	}
	 
	
	return 0;
}

//int main(){ 
//	freopen("input.txt", "rt", stdin);
//	int n, i, j;
//	scanf("%d", &n);
//	vector<int> a(n), b(n);
//	for(i=0; i<n; i++){
//		scanf("%d", &a[i]);
//		b[i]=1;
//	}
//	for(i=n; i>0; i--){
//		for(j=0; j<i; j++){
//			if(a[i] <= a[j]) b[i]++;
//		}
//	}
//	for(i=0; i<n; i++){
//		printf("%d ", b[i]);
//	}
//	 
//	
//	return 0;
//}
