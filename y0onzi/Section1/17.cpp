#include <stdio.h>

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, j, num, sum, answer;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		sum=0;
		scanf("%d %d", &num, &answer);
		for(j=1; j<=num; j++){
			sum+=j;
		}
		if(answer==sum) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
