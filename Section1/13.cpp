#include <stdio.h>
using namespace std;
int ch[10]; 

int main() {
	//freopen("input.txt", "rt", stdin);
	int i, digit, max=-2147000000, res;
	char n[101]; 
	scanf("%s", n);
	
	for(i=0; n[i]!='\0'; i++){
		digit=n[i]-48;   
		ch[digit]++;
	}
	
	for(i=0; i<=9; i++){
		if(ch[i]>=max){   
			max=ch[i]; 
			res=i;   
		}
	}
	printf("%d", res);
	return 0;
}
