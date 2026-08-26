#include<stdio.h>
#include<stdlib.h>
int main() {
    int m[5][5];
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(m[i][j]==1) {
                printf("%d\n", abs(i-2)+abs(j-2)); //indexing starts from 0, so the center is at (2,2)  
            }
        }
    }
    return 0;
}