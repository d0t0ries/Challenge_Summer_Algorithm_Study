#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void recur(int x){
	if(x==0) return; //종료지점 
	else {
//		printf("%d ", x); //-> 3 2 1 출력  
		recur(x-1);
		printf("%d ", x); //-> 1 2 3 출력  
}

int main(){ 
	freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	recur(n);
	return 0;
}
