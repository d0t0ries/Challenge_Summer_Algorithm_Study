#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main() {
    int i,  c=0,h=0,pos;
    char sik[10];
    scanf("%s", &sik);
    if (sik[1] == 'H') {
        c = 1;
        pos = 1;
    }
    else {
        for (i = 1; sik[i] != 'H'; i++) {
            c = c * 10 + (sik[i] - 48);
        }
        pos = i;
    }
    if (sik[pos + 1] == '\0')h = 1;
    else {
        for (i = pos + 1; sik[i] != '\0'; i++) {
            h = h * 10 + (sik[i] - 48);
        }
    }
    printf("%d", c*12+h);
    return 0;
}

//31
