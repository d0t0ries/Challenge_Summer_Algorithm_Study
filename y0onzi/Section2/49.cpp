#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[11][11], b[11];
int main(){ 
	freopen("input.txt", "rt", stdin);
	int n, i, j, res=0; 
	
	scanf("%d", &n);	
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			a[j][i]=b[i];
		}
	}
	for(i=n; i>=1; i--){
		scanf("%d", &b[i]);
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(a[i][j] >b[i]) a[i][j]=b[i];
		}
	}
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			res+=a[i][j];
		}
	}
	printf("%d", res);
	
	return 0;
}



//int main(){ 
//	//freopen("input.txt", "rt", stdin);
//	int n, i, j, res=0, tmp; 
//	
//	scanf("%d", &n);
//	vector<vector<int> > a(n+1, vector<int>(n+1));
//	
//	int front;
//	vector<int> right(n+1);	
//	
//	for(i=0; i<n; i++){
//		scanf("%d", &front);
//		for(j=0; j<n; j++){
//			a[j][i]=front;
//		}
//		//전부 복사하고 right 배열 값과 비교하면서 블록 완성 
//	}
//		
//	for(i=0; i<n; i++){
//		scanf("%d", &right[i]);
//	}
//	
//	tmp=n-1;
//	for(i=0; i<n; i++){
//		for(j=0; j<n; j++){
//			if(a[i][j] > right[tmp]) {
//			a[i][j]=right[tmp];
//			}
//		}
//		tmp--;
//	}
//	
//	for(i=0; i<n; i++){
//		for(j=0; j<n; j++){
//			res+=a[i][j];
//			//printf("%d ", a[i][j]);
//		}
//		//printf("\n");
//	}
//	printf("%d", res);
//	
//	return 0;
//}
