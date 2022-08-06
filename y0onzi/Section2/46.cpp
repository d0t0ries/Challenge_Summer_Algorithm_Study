#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[2001];
int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, k, cnt=0, pos=0, total=0; 
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
		total+=a[i];
	}
	scanf("%d", &k);
	
	if(k>=total) {
		printf("-1");
		return 0;
	}
	
	while(1){
		pos++;
		if(pos>n) pos=1;
		
		if(a[pos]==0) continue;
		
		a[pos]--;
		cnt++;
		
		if(cnt==k) break;
	}

	while(1){
		pos++;
		if(pos>n) pos=1;
		
		if(a[pos]!=0) break;
	}
	printf("%d", pos);
	
	return 0;
}
