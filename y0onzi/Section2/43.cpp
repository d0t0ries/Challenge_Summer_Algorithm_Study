#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[1001], n;

int Count(int s){
	int i, cnt=1, sum=0;
	for(i=0; i<n; i++){
		if(sum+a[i]>s){
			cnt++;
			sum=a[i];
		}
		else sum+=a[i];
	}
	return cnt; 
}

int main(){ 
	//freopen("input.txt", "rt", stdin);

	int i, m, lt=1, rt, mid, sum=0, answer, cnt, max=-2147000000; 
	
	scanf("%d %d", &n, &m);

	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		rt+=a[i];
		if(a[i]>max) max=a[i];
	}

	while(lt<=rt){
		mid = (lt+rt)/2;
		if( mid>=max && Count(mid)<=m){
			rt=mid-1;
			answer=mid;
		}
		else lt=mid+1;
	} 	
	
	printf("%d", answer);
	
	return 0;
}
