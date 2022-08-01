#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> a(n+1);
	vector<int> b(n+1);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=n; i>=1; i--){
		pos=i;
		for(j=1; j<=a[i]; j++){  
			b[pos]=b[pos+1];
			pos++;
		}
		b[pos]=i;
	}

	for(i=1; i<=n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}



