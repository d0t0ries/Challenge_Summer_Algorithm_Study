#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, cnt=0, lt, rt, current, k=1;
	scanf("%d", &n);
	
	while(lt!=0){
		lt=n/(k*10);
		current = (n/k)%10;
		rt = n%k;
		//printf("lt: %d\tcurr: %d\trt: %d\n", lt, current, rt);
		if(current>3) cnt+=(lt+1)*k;
		else if(current<3) cnt+=lt*k;
		else cnt+=(lt*k) + (rt+1);
		k*=10;
	}
	
	printf("%d", cnt);
	
	return 0;
}
