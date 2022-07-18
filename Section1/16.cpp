#include <stdio.h>
#include <stdlib.h>

int a[60], b[60];
int main() {
	freopen("input.txt", "rt", stdin);
	int i;
	char str1[100], str2[100];
	scanf("%s", str1); 


	for(i=0; str1[i]!='\0'; i++){
		if(str1[i] >= 65 && str1[i] <= 90){
			a[str1[i]-64]++;
		}
		else if (str1[i] >= 97 && str1[i] <= 122) {
            a[str1[i]-70]++; 
        }
	}

	scanf("%s", str2); 
	for(i=0; str2[i]!='\0'; i++){
		if(str2[i] >= 65 && str2[i] <= 90){
			b[str2[i]-64]++;
		}
		else if (str2[i] >= 97 && str2[i] <= 122) {
            b[str2[i] - 70]++; 
        }
	}
	for(i=1; i<=52; i++){
		if(a[i]!=b[i]){
			printf("NO");
			//return 0;
			exit(0);
		}
	}
	printf("YES");
	return 0;
}
