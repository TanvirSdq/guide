#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    int result = strcasecmp(s1, s2);
    
    if(result < 0)
        printf("-1\n");
    else if(result > 0)
        printf("1\n");
    else
        printf("0\n");
return 0;
}    
    