#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    char letter[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%s", s);
    int l = strlen(s);
    int count = 0, seen[26] = {0};
    for(int i=0; i<l; i++) {
        for(int j=0; j<26; j++) {
            if(letter[j]==s[i] && seen[j]==0) {
                seen[j]=1;
                count++;
                break;
            }
        }
    }
    (count % 2 != 0)?printf("IGNORE HIM!\n"):printf("CHAT WITH HER!\n");
    return 0;
}          