#include <stdio.h>

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, h[101], cnt=0, max; 
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &h[i]);
	}
	max=h[n];
	for(i=n-1; i>0; i--){
		if(h[i] > max) {
			max=h[i];
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}

//int main(){
//	//freopen("input.txt", "rt", stdin);
//	int n, i, j, cnt=0; 
//	scanf("%d", &n);
//	int student[n], flag[n];
//	for(i=0; i<n; i++){
//		scanf("%d", &student[i]);
//	}
//	for(i=1; i<n; i++){
//		int h=student[i-1];
//		for(j=i; j<n; j++){
//			if(h>student[j]) flag[i]=0;
//			else {
//				flag[i]=1;
//				break;
//			}
//		}
//
//	}
//	for(i=0; i<n; i++){
//		if(flag[i]==0) cnt++;
//	}
//	printf("%d", cnt);
//	
//	return 0;
//}
