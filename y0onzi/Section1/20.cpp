#include <stdio.h>

//int main(){
//	//freopen("input.txt", "rt", stdin);
//	int n, i;
//	scanf("%d", &n);
//	int a[n], b[n];
//	for(i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(i=0; i<n; i++){
//		scanf("%d", &b[i]);
//	}
//	for(i=0; i<n; i++){
//		if(a[i]==b[i]) printf("D\n");
//		else if( (a[i]==1 && b[i]==3) || (a[i]==2 && b[i]==1) || (a[i]==3 && b[i]==2)) 
//			printf("A\n");
//		else if( (a[i]==3 && b[i]==1) || (a[i]==1 && b[i]==2) || (a[i]==2 && b[i]==3)) 
//			printf("B\n");
//	}
//	return 0;
//}

int main(){
	freopen("input.txt", "rt", stdin);
	int n, i, a[101], b[101];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]==b[i]) printf("D\n");
		else if(a[i]==1 && b[i]==3) printf("A\n");
		else if(a[i]==2 && b[i]==1) printf("A\n");
		else if(a[i]==3 && b[i]==2) printf("A\n");
		else printf("B\n");
	}
	return 0;
}
