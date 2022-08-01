#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 
int c[20];
int main(){ 
	freopen("input.txt", "rt", stdin);
	int a, s, n, tmp, i, j, pos;
	scanf("%d %d", &s, &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		pos=-1;
		for(j=0; j<s; j++){
			if(c[j]==a) pos=j;
		}
		if(pos==-1){
			for(j=s-1; j>=1; j--) c[j]=c[j-1];
		}
		else {
			for(j=pos; j>=1; j--) c[j]=c[j-1];
		}
		c[0]=a;
	}
	
	for(i=0; i<s; i++){
		printf("%d ", c[i]);
	}
	return 0;
}

//int main(){ 
//	//freopen("input.txt", "rt", stdin);
//	int a[101], s, n, tmp, i, j, pos;
//	scanf("%d %d", &s, &n);
//	for(i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	vector<int> c(20);
//	
//	for(i=0; i<n; i++){
//		pos=-1;
//		tmp=a[i];
//		for(j=0; j<s; j++){
//			if(c[j]==tmp) pos=j;
//		}
//		if(pos==-1){
//			for(j=s-1; j>=1; j--){
//				c[j]=c[j-1];
//			}
//		}
//		else {
//			for(j=pos; j>=1; j--){
//				c[j]=c[j-1];
//			}
//			
//		}
//		c[0]=tmp;
//	}
//
//
//	for(i=0; i<s; i++){
//		printf("%d ", c[i]);
//	}
//	return 0;
//}



