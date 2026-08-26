#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void* a, const void* b) {
    return (*(const char*)a - *(const char*)b);
}
int main() {

    char s[100], s1[100];
    scanf("%s", s);
    int l = strlen(s);

    for(int i=0, j=0; i<l; i+=2, j++) {
        s1[j] = s[i];    
    }

    s1[l/2+1] = '\0';

    qsort(s1,l/2+1,sizeof(char), compare);

    for(int i=0, j=0; i<l; i+=2, j++) {
        s[i] = s1[j];    
    }

    printf("%s\n", s);
    return 0;
}
