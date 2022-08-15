#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int main(){ 
	//freopen("input.txt", "rt", stdin);
	int i, flag=1; 
	char ch, arr[50];
	stack<char> st;
	scanf("%s", &arr);
	
	for(i=0; arr[i]!='\0'; i++){
		if(arr[i]=='(') st.push(arr[i]);
		else {
			if(st.empty()) { //닫는 괄호에 맞는 여는 괄호가 스택에 없을때 
				printf("NO");
				flag=0; //정상종료가 아님  
				break;
				//return 0;
			}
			else st.pop();
		} 
	}

	if(st.empty() && flag==1) printf("YES");
	else if( !st.empty()&& flag==1) printf("NO");	
		
	return 0;
}
