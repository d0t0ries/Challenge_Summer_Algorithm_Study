#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	char ch[10];
	int c=0, h=0, pos, i;
	scanf("%s", ch);
	
	if(ch[1]=='H'){
		c=1;
		pos=1;
	}
	else {
		for(i=1; ch[i]!='H'; i++){
			c=c*10 + (ch[i]-48);
		}
		pos=i;
	}
	if(ch[pos+1]=='\0') h=1;
	else{
		for(i=pos+1; ch[i]!='\0'; i++){
			h=h*10 + (ch[i]-48);
		}
	}
	
	printf("%d",  c*12 + h);
	
	return 0;
}
