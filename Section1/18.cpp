#include <stdio.h>

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, m, num, cnt=0, max=-2147000000;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		if(num <= m) cnt=0;
		else cnt++;
		if(cnt>max) max=cnt;
	}
	if(max==0) printf("-1"); 
	else printf("%d", max);
	
	return 0;
}
