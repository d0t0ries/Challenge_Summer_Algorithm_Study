#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <vector> 
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i, j, n, tmp=0, num, cnt=0;
    scanf("%d", &n);
    int a[100];
    int b[100] = {};
    int c[100] = {};
        for (i =0; i<n; i++) {
            scanf("%d", &a[i]);
            if (a[i] < 0) b[i]=a[i];
            else c[i] = a[i];
        }
        for (i = 0; i < n; i++) {
            if(b[i] !=0)
            printf("%d ", b[i]);
         }
        for (i = 0; i < n; i++) {
            if (c[i] != 0)
            printf("%d ", c[i]);
        }
    return 0;
}

/*35 강의 내용
int main() {
int a[101],n,i,j,tmp;
scanf("%d", &n);
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}

for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>0 && a[j+1]<0){
tmp = a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
}
}
for(i=0;i<n;i++){
printf("%d", &a[i]);
}
return 0;
}
*/
