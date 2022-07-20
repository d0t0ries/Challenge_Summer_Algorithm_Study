#include <stdio.h>
#include <algorithm>
using namespace std;


int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, j, score[101], order[101];
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &score[i]);
		order[i]=1;
	}
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(score[i] < score[j]) order[i]++;
		}
	}
	for(i=1; i<=n; i++){
		printf("%d ", order[i]);
	}
	
	
	return 0;
}
