#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
   
//int main(){ 
//	//freopen("input.txt", "rt", stdin);
//	int n, i, j, cnt=0; 
//	
//	scanf("%d", &n);
//	vector<vector<int> > a(n+2, vector<int>(n+2));
//	
//	for(i=1; i<=n; i++){
//		for(j=1; j<=n; j++){
//			scanf("%d", &a[i][j]);
//		}
//	}
//	
//	int up, down, left, right; 
//	for(i=1; i<=n; i++){
//		for(j=1; j<=n; j++){
//			up=a[i-1][j];
//			down=a[i+1][j];
//			left=a[i][j-1];
//			right=a[i][j+1];
//			
//			if(a[i][j] > up && a[i][j] > down && a[i][j] > left &&a[i][j] > right) 
//				cnt++;
//		}
//		//printf("\n~%d~\n", cnt);
//	}
//
//	printf("%d", cnt);
//	
//	return 0;
//}

int a[60][60];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, j, cnt=0, k, flag; 
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int up, down, left, right; 
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			flag=0;
			for(k=0; k<4; k++){
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]){
					flag=1;
					break;
				}
			}
		if(flag==0) cnt++;
		}
	}

	printf("%d", cnt);
	
	return 0;
}
