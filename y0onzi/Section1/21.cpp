int main(){
	//freopen("input.txt", "rt", stdin);
	int a[10], b[10], i, a_cnt=0, b_cnt=0, last=0;
	for(i=1; i<=10; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=10; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=10; i++){
		if(a[i] > b[i]){
			last=1;
			a_cnt+=3;
		} 
		else if (a[i] < b[i]) {
			last=2;
			b_cnt+=3;
		}
		else {
			a_cnt++;
			b_cnt++;
		}
	}
	
	printf("%d %d\n", a_cnt, b_cnt);
	if(a_cnt > b_cnt) printf("A");
	else if (a_cnt < b_cnt) printf("B");
	else {
		if(last==1) printf("A");
		else if(last==2) printf("B");
		else printf("D");
	}
	
	return 0;
}
