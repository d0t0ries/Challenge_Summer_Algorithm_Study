#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

//int stack[100];
//int top=-1;
//void push(int x){
//	stack[++top]=x;
//}
//int pop(){
//	return stack[top--];
//}

int main(){ 
	//freopen("input.txt", "rt", stdin);
	int n, k; 
	stack<int> s;
	char str[20]="0123456789ABCDEF";//16진수때문에 !  
	
	scanf("%d %d", &n, &k);
	
	while(n>0){
		s.push(n%k);
		n=n/k;
	}
	
	while(!s.empty()){ //top!=-1
		printf("%c", str[s.top()]);
		s.pop();//주의!! 
	}
	return 0;
}
