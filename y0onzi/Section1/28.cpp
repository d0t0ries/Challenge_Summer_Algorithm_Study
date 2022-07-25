#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
 

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, i, j, tmp, two=0, five=0, cnt=0;
	scanf("%d", &n);
	
	for(i=2; i<=n; i++){ 
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0) { 
				tmp=tmp/j; 
				if(j==2) two++;
				else if(j==5) five++;  
			}
			else j++; 
			if(tmp==1) break; 
		}
	}
	
	if(two<five) printf("%d\n", two);
	else printf("%d\n", five);


	
	return 0;
}
