int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k, i, max=-2147000000, sum=0; 
	scanf("%d %d", &n, &k);
	vector<int> num(n);
	for(i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	for(i=0; i<k; i++){
		sum+=num[i];
	}
	max=sum;
	for(i=k; i<n; i++){
		sum = sum + (num[i]-num[i-k]);
		if(sum>max) max=sum;
	}
	printf("%d", max);
	
	
	return 0;
}
