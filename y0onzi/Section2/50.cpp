#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int a[51][51];
int main(){ 
	freopen("input.txt", "rt", stdin);
	int h, w, n, m, i, j, k, g, sum,  max=-2147000000; 
	
	scanf("%d %d", &h, &w);
	for(i=1; i<=h; i++){
		for(j=1; j<=w; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	scanf("%d %d", &n, &m);
	
	
	for(i=1; i<=h-n+1; i++){ //h까지 전부 반복할 필요 없음  
		for(j=1; j<=w-m+1; j++){ //w까지 전부 반복할 필요 없음
			sum=0;
			for(k=i; k<i+n; k++){ //반복문 범위 주의!  
				for(g=j; g<j+m; g++){
					sum+=a[k][g];
				}
			}
			if(sum > max) max=sum;
		}
	}
	
	printf("%d", max);
	return 0;
}
