#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, k, pos=0, bp=0, cnt=0; 
	
	scanf("%d %d", &n, &k);
	vector<int> prince(n+1);

	while(1){
		pos++;
		if(pos>n) pos=1;
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){
				prince[pos]=1;
				cnt=0;
				bp++;
			}
		}
		if(bp==n-1) break;
	}
	
	for(i=1; i<n; i++){
		if(prince[i]==0){
			printf("%d", i);
			break;
		}
	}
	return 0;
}

  
//=========================================//
//int main(){ 
//	//freopen("input.txt", "rt", stdin);
//	int n, i, k; 
//	
//	scanf("%d %d", &n, &k);
//	queue<int> x; 
//	for(i=1; i<=n; i++){
//		x.push(i);
//	}
//
//	while(!x.empty()){
//		for(i=1; i<k; i++){
//			x.push(x.front());
//			x.pop();
//		}
//		
//		x.pop();
//		
//		if(x.size()==1){
//			printf("%d", x.front());
//			return 0;
//		}
//	}
//	
//	
//	return 0;
//}
	

	
