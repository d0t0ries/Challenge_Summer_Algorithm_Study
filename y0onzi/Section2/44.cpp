#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int Count(int len, int x[]){
	int i, cnt=1, pos=x[1]; 
	for(i=2; i<=n; i++){
		if(x[i]-pos >= len){ 
			cnt++; 
			pos=x[i];	
		}
	}
	return cnt; 
}


int main(){ 
	//freopen("input.txt", "rt", stdin);
	int i, m, lt=1, rt, mid, sum=0, answer, max=-2147000000; 
	
	scanf("%d %d", &n, &m);
	int *x= new int[n+1]; 
	for(i=1; i<=n; i++){
		scanf("%d", &x[i]);
	}

	sort(x+1, x+n+1);
	
	rt=x[n];
	while(lt<=rt){
		mid = (lt+rt)/2;
		if(Count(mid, x) >= m){
			answer=mid;
			lt=mid+1;
		}
		else rt=mid-1;
	} 	
	
	printf("%d", answer);
	
	delete[] x; 
	
	return 0;
}
