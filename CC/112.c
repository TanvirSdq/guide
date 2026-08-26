#include<stdio.h>
#include<string.h>
int main(){
    int n;
    if(scanf("%d", &n) != 1) return 0;
    char word[105];
    for(int i=0; i<n; i++)
    {
        scanf("%s", word);
        int l=strlen(word);
        if(l<=10)
            printf("%s\n", word);
        else
        printf("%c%d%c\n", word[0], l-2, word[l-1]);
    }
    return 0;
}