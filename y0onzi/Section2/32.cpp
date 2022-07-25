#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
	freopen("input.txt", "rt", stdin);
	int n, i, j, a[100], idx, tmp; 
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		idx=i;
		for(j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
