#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main(){ 
	//freopen("input.txt", "rt", stdin);
	stack<int> st;
	int n, i, j=1, num;
	
	vector<char> str;	
//	vector<int> arr(n+1);
	
	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		arr[i]=i;
//	}
	for(i=1; i<=n; i++){
		scanf("%d", &num);
		st.push(num);
		str.push_back('P');
		while(1){
			if(st.empty()) break;
			
			if(j==st.top()){
				st.pop();
				j++;
				str.push_back('O');
			}
			else break;
			
		}
	}
	
	
	if(st.empty()) {
		for(i=0; i<str.size(); i++) printf("%c", str[i]);
	}
	else printf("impossible");
		
	return 0;
}
