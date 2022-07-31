#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, m, i, p1=0, p2=0, p3=0;
	
	scanf("%d", &n);
	vector<int> a(n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end()); 

	scanf("%d", &m);
	vector<int> b(m);
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	sort(b.begin(), b.end());
  
	vector<int> c(n+m);

	while(p1<n && p2<m){
		if(a[p1] < b[p2]) p1++; 
		else if (a[p1] > b[p2]) p2++;
		else {
			c[p3++]=a[p1++];
			p2++;
		}
	}
	

	for(i=0; i<p3; i++){
		printf("%d ", c[i]);
	}
	return 0;
}
